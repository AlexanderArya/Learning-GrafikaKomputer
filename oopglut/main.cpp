#include <Windows.h>
#include <GL\freeglut.h>
#include <iostream>

// Perpotongan Garis

void init() {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glMatrixMode(GL_PROJECTION);
    glPointSize(10.0);
    glLoadIdentity();
    glLineWidth(4.0f);
    gluOrtho2D(0.0, 720, 0.0, 480.0);
}

void perpotongangaris() {

    //A
    float ex = 300, ey = 50, fx = 350, fy = 150, gx = 400, gy = 50, hx = 350, hy = 150, ix= 320, iy= 100, jx= 380, jy= 100, Mef, Mgh, Mij, Cij, Cef, Cgh, px1, py1;
    glClear(GL_COLOR_BUFFER_BIT);


     //A
    //Garis Warna Merah
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(ex, ey);
    glVertex2f(fx, fy);
    glEnd();

    //Garis Warna Biru
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(gx, gy);
    glVertex2f(hx, hy);
    glEnd();

    //Garis Warna hitam
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(ix, iy);
    glVertex2f(jx,jy);
    glEnd();

    //Rumus Perpotongan Garis
    Mef = (fy - ey) / (fx - ex);
    Mgh = (hy - gy) / (hx - gx);
    Mij = (jy - iy) / (jx - ix);

    Cef = ey - (ex * Mef);
    Cgh = gy - (gx * Mgh);
    Cij = iy - (ix * Mij);

    //Titik Potong
    px1 = (Cij - Cgh - Cef) / (Mef - Mgh - Mij);
    py1 = (Mef * px1) + Cef;

    //Hasil
    glBegin(GL_POINTS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(px1, py1);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(720, 480);
    glutCreateWindow("Theo Vito Pradipa_672021087");
    init();
    glutDisplayFunc(perpotongangaris);
    //glutFullScreen();
    glutMainLoop();
}
