#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
    // Left side of the A
    glColor3f(1.0f, 0.0f, 1.0f); // Magenta
    glVertex2f(-0.5f, -0.5f);
    glColor3f(1.0f, 1.0f, 0.0f); // Yellow
    glVertex2f(0.0f, 0.5f);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.0f, 0.5f);

    // Right side of the A
    glColor3f(0.0f, 1.0f, 0.0f); // Green
    glVertex2f(0.0f, 0.5f);
    glColor3f(0.0f, 1.0f, 1.0f); // Cyan
    glVertex2f(0.5f, -0.5f);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.0f, 0.5f);

    // Crossbar of the A
    glColor3f(0.0f, 1.0f, 0.0f); // Green
    glVertex2f(-0.25f, 0.0f);
    glColor3f(0.0f, 1.0f, 1.0f); // Cyan
    glVertex2f(0.25f, 0.0f);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-0.25f, 0.0f);
    glVertex2f(0.25f, 0.0f);
    glColor3f(1.0f, 0.0f, 1.0f); // Magenta
    glVertex2f(0.25f, 0.0f);

    glEnd();

    glFlush();
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0); // Set background color to white
    glColor3f(0.0, 0.0, 0.0); // Set drawing color to black
    glPointSize(4.0); // A larger point size
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Colored A");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
