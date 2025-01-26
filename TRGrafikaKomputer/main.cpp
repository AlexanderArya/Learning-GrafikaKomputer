#include <GL/glut.h>
#include <SOIL/SOIL.h>

// Posisi kamera
float camX = 0.0, camY = 1.0, camZ = 5.0;
// Arah pandang kamera
float lookX = 0.0, lookY = 0.0, lookZ = 0.0;
// Kecepatan gerakan kamera
float speed = 0.1;
// Sudut pandang kamera
float yaw = -90.0f, pitch = 0.0f;
// Sensitivitas mouse
float sensitivity = 0.1f;
// Posisi awal mouse
int lastX = 250, lastY = 250;

GLuint texture;

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);

    // Load gambar tekstur
    texture = SOIL_load_OGL_texture("texture.jpg", SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_INVERT_Y);

    if (texture == 0) {
        printf("Gagal memuat tekstur\n");
    }

    // Pengaturan tekstur
    glBindTexture(GL_TEXTURE_2D, texture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    glEnable(GL_TEXTURE_2D);
}

void updateCameraDirection() {
    float radYaw = yaw * M_PI / 180.0f;
    float radPitch = pitch * M_PI / 180.0f;

    lookX = camX + cos(radYaw) * cos(radPitch);
    lookY = camY + sin(radPitch);
    lookZ = camZ + sin(radYaw) * cos(radPitch);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // Atur pandangan kamera
    gluLookAt(camX, camY, camZ,   // posisi kamera
              lookX, lookY, lookZ,  // titik yang dilihat
              0.0, 1.0, 0.0); // vektor ke atas

    // Bind tekstur
    glBindTexture(GL_TEXTURE_2D, texture);

    // Gambar piramida dengan tekstur
    glBegin(GL_TRIANGLES);

    // Sisi depan
    glTexCoord2f(0.5, 1.0); glVertex3f( 0.0, 1.0, 0.0);
    glTexCoord2f(0.0, 0.0); glVertex3f(-1.0, 0.0, 1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f( 1.0, 0.0, 1.0);

    // Sisi kanan
    glTexCoord2f(0.5, 1.0); glVertex3f( 0.0, 1.0, 0.0);
    glTexCoord2f(1.0, 0.0); glVertex3f( 1.0, 0.0, 1.0);
    glTexCoord2f(0.0, 0.0); glVertex3f( 1.0, 0.0, -1.0);

    // Sisi belakang
    glTexCoord2f(0.5, 1.0); glVertex3f( 0.0, 1.0, 0.0);
    glTexCoord2f(0.0, 0.0); glVertex3f( 1.0, 0.0, -1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(-1.0, 0.0, -1.0);

    // Sisi kiri
    glTexCoord2f(0.5, 1.0); glVertex3f( 0.0, 1.0, 0.0);
    glTexCoord2f(1.0, 0.0); glVertex3f(-1.0, 0.0, -1.0);
    glTexCoord2f(0.0, 0.0); glVertex3f(-1.0, 0.0, 1.0);

    glEnd();

    // Gambar alas dengan tekstur
    glBegin(GL_QUADS);
    glTexCoord2f(0.0, 0.0); glVertex3f(-1.0, 0.0, 1.0);
    glTexCoord2f(1.0, 0.0); glVertex3f( 1.0, 0.0, 1.0);
    glTexCoord2f(1.0, 1.0); glVertex3f( 1.0, 0.0, -1.0);
    glTexCoord2f(0.0, 1.0); glVertex3f(-1.0, 0.0, -1.0);
    glEnd();

    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
    glMatrixMode(GL_MODELVIEW);
}

void keyboard(unsigned char key, int x, int y) {
    // Hitung arah pandang
    float dirX = lookX - camX;
    float dirZ = lookZ - camZ;
    float length = sqrt(dirX * dirX + dirZ * dirZ);
    dirX /= length;
    dirZ /= length;

    // Gerakan ke arah depan atau belakang
    if (key == 'w' || key == 'W') {
        camX += dirX * speed;
        camZ += dirZ * speed;
        lookX += dirX * speed;
        lookZ += dirZ * speed;
    } else if (key == 's' || key == 'S') {
        camX -= dirX * speed;
        camZ -= dirZ * speed;
        lookX -= dirX * speed;
        lookZ -= dirZ * speed;
    }

    // Gerakan ke kiri atau kanan
    if (key == 'a' || key == 'A') {
        camX -= dirZ * speed;
        camZ += dirX * speed;
        lookX -= dirZ * speed;
        lookZ += dirX * speed;
    } else if (key == 'd' || key == 'D') {
        camX += dirZ * speed;
        camZ -= dirX * speed;
        lookX += dirZ * speed;
        lookZ -= dirX * speed;
    }

    glutPostRedisplay();
}

void mouseMotion(int x, int y) {
    int dx = x - lastX;
    int dy = y - lastY;

    yaw += dx * sensitivity;
    pitch -= dy * sensitivity;

    if (pitch > 89.0f) pitch = 89.0f;
    if (pitch < -89.0f) pitch = -89.0f;

    updateCameraDirection();

    lastX = x;
    lastY = y;

    glutPostRedisplay();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Piramida dengan Tekstur");

    init();

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutPassiveMotionFunc(mouseMotion);
    glutMainLoop();

    return 0;
}
