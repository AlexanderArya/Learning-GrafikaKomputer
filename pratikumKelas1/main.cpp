#include <windows.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>

void mulai() {
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 1000, 0.0, 1000); // Menggunakan glOrtho() untuk proyeksi ortografik
}

void myDisplay() {
    glClear(GL_COLOR_BUFFER_BIT);
    // Buat kotak merah
//    glBegin(GL_POLYGON);
//    glColor3f(1.0f,0.0f,0.0f); // buat kotak
//    glVertex2f(-0.5f,-0.5f); // Warna merah
//    glVertex2f(0.5f,-0.5f); //Nilai x dan y
//    glVertex2f(0.5f,0.5f);
//    glVertex2f(-0.5f,0.5f);
//    glEnd();
//    glFlush(); //Memulai proses render
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.9);
    glVertex2i(0, 1000);
    glVertex2i(1000, 1000);
    glColor3f(0.7,0.8,1);
    glVertex2i(1000,100);
    glVertex2i(0,100);
    glEnd();
    glFlush();
}

int main(int args, char** argv) {
    glutInit(&args, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(1200,800);
    glutCreateWindow("672021256_Latihan");
    mulai();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}
