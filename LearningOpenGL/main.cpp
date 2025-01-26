#include<windows.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>

void mulai() {
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 1000, 0.0, 1000);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}



void myDisplay() {
    glClear(GL_COLOR_BUFFER_BIT);


    //langit
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.9);
    glVertex2i(0, 1000);
    glVertex2i(1000, 1000);
    glColor3f(0.7, 0.8, 1);
    glVertex2i(1000, 100);
    glVertex2i(0, 100);
    glEnd();


    //Burung 1
    // Burung sayap kanan
    glColor3f(0.5, 0.4, 0.3); // Abu-abu
    glBegin(GL_TRIANGLES);
    glVertex2i(70, 800);
    glVertex2i(80, 830);
    glVertex2i(80, 800);
    glEnd();

      // Burung sayap kiri
    glColor3f(0.4, 0.3, 0.2); // Abu-abu
    glBegin(GL_TRIANGLES);
    glVertex2i(70, 800);
    glVertex2i(60, 830);
    glVertex2i(80, 800);
    glEnd();

    //Burung 2
    // Burung sayap kanan
    glColor3f(0.5, 0.4, 0.3); // Abu-abu
    glBegin(GL_TRIANGLES);
    glVertex2i(100, 850);
    glVertex2i(110, 880);
    glVertex2i(110, 850);
    glEnd();

      // Burung sayap kiri
    glColor3f(0.4, 0.3, 0.2); // Abu-abu
    glBegin(GL_TRIANGLES);
    glVertex2i(100, 850);
    glVertex2i(90, 880);
    glVertex2i(110, 850);
    glEnd();

     //Burung 3
    // Burung sayap kanan
    glColor3f(0.5, 0.4, 0.3); // Abu-abu
    glBegin(GL_TRIANGLES);
    glVertex2i(50, 850);
    glVertex2i(60, 880);
    glVertex2i(60, 850);
    glEnd();

      // Burung sayap kiri
    glColor3f(0.4, 0.3, 0.2); // Abu-abu
    glBegin(GL_TRIANGLES);
    glVertex2i(50, 850);
    glVertex2i(40, 880);
    glVertex2i(60, 850);
    glEnd();




    // Matahari
    glColor3f(1.0, 1.0, 0.0); // Warna kuning
    glBegin(GL_POLYGON);
    float radius = 50; // Radius matahari
    int num_segments = 100; // Jumlah segmen untuk membuat lingkaran
    float x_center = 1000; // Koordinat x pusat matahari
    float y_center = 980; // Koordinat y pusat matahari (lebih ke atas)
    for (int i = 0; i < num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments); // Sudut pada lingkaran
        float x = x_center + radius * cosf(theta); // Koordinat x titik pada lingkaran
        float y = y_center + radius * sinf(theta); // Koordinat y titik pada lingkaran
        glVertex2f(x, y);
    }
    glEnd();







    // Tanah
    glColor3f(0.4, 0.8, 0.4); // Hijau tua
    glBegin(GL_POLYGON);
    glVertex2i(0, 450); // kiri atas
    glVertex2i(800, 450); // kanan atas
    glVertex2i(1500, 0); // kanan bawah
    glVertex2i(0, 0); // kiri bawah
    glEnd();

    // Jalan
    glColor3f(0.4, 0.4, 0.4); // Abu-abu gelap
    glBegin(GL_QUADS);
    glVertex2i(0, 0); // kiri bawah
    glVertex2i(1000, 0); // kanan bawah
    glVertex2i(1000, 220); // kanan atas
    glVertex2i(0, 220); // kiri atas
    glEnd();

    //Striping jalanan 1
    glColor3f(1.0, 1.0, 1.0); // Abu-abu gelap
    glBegin(GL_QUADS);
    glVertex2i(100, 100); // kiri bawah
    glVertex2i(300, 100); // kanan bawah
    glVertex2i(310, 110); // kanan atas
    glVertex2i(110, 110); // kiri atas
    glEnd();

     //Striping jalanan 1
    glColor3f(1.0, 1.0, 1.0); // Abu-abu gelap
    glBegin(GL_QUADS);
    glVertex2i(500, 100); // kiri bawah
    glVertex2i(700, 100); // kanan bawah
    glVertex2i(710, 110); // kanan atas
    glVertex2i(510, 110); // kiri atas
    glEnd();


     //Striping jalanan 2
    glColor3f(1.0, 1.0, 1.0); // Abu-abu gelap
    glBegin(GL_QUADS);
    glVertex2i(1000, 100); // kiri bawah
    glVertex2i(900, 100); // kanan bawah
    glVertex2i(910, 110); // kanan atas
    glVertex2i(1100, 110); // kiri atas
    glEnd();

    // Striping
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.1); // Abu-abu gelap
    glVertex2i(55, 502); // kiri bawah
    glVertex2i(250, 502); // kanan bawah
    glVertex2i(250, 500); // kanan atas
    glVertex2i(55, 500); // kiri atas
    glEnd();

    // Pintu garasi
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2); // Abu-abu gelap
    glVertex2i(55, 350); // kiri bawah
    glVertex2i(250, 350); // kanan bawah
    glVertex2i(250, 600); // kanan atas
    glVertex2i(55, 600); // kiri atas
    glEnd();

    // Jalan kiri
    glColor3f(0.5, 0.5, 0.5); // Abu-abu
    glBegin(GL_QUADS);
    glVertex2i(42, 220); // kiri bawah
    glVertex2i(402, 220); // kanan bawah
    glVertex2i(410, 310); // kanan atas
    glVertex2i(55, 310); // kiri atas
    glEnd();

    // Tembok kiri
    glColor3f(0.6, 0.6, 0.6); // Abu-abu tua
    glBegin(GL_QUADS);
    glVertex2i(55, 310); // kiri bawah
    glVertex2i(410, 310); // kanan bawah
    glVertex2i(410, 650); // kanan atas
    glVertex2i(55, 650); // kiri atas
    glEnd();

    // Garasi
    glColor3f(0.7, 0.7, 0.7); // Abu-abu
    glBegin(GL_QUADS);
    glVertex2i(100, 310); // kiri bawah
    glVertex2i(365, 310); // kanan bawah
    glVertex2i(365, 550); // kanan atas
    glVertex2i(100, 550); // kiri atas
    glEnd();

    // Tembok kanan
    glColor3f(0.6, 0.6, 0.6); // Abu-abu tua
    glBegin(GL_QUADS);
    glVertex2i(950, 310); // kiri bawah
    glVertex2i(425, 310); // kanan bawah
    glVertex2i(402, 650); // kanan atas
    glVertex2i(950, 650); // kiri atas
    glEnd();

    // Tangga akhir
    glColor3f(0.5, 0.5, 0.5); // Abu-abu
    glBegin(GL_QUADS);
    glVertex2i(950, 310); // kanan bawah
    glVertex2i(410, 310); // kiri bawah
    glVertex2i(410, 400); // kiri atas
    glVertex2i(950, 400); // kanan atas
    glEnd();

    // Pintu
    glColor3f(0.8, 0.6, 0.4); // Coklat muda
    glBegin(GL_QUADS);
    glVertex2i(735, 400); // kanan bawah
    glVertex2i(600, 400); // kiri bawah
    glVertex2i(600, 630); // kiri atas
    glVertex2i(735, 630); // kanan atas
    glEnd();

    // Pintu
    glColor3f(0.5f, 0.3f, 0.2f); // Warna coklat yang lebih tua
    glBegin(GL_QUADS);
    glVertex2i(668, 400); // kanan bawah
    glVertex2i(666, 400); // kiri bawah
    glVertex2i(666, 630); // kiri atas
    glVertex2i(668, 630); // kanan atas
    glEnd();

    // Jendela
    glColor4f(0.0, 0.5, 1.0, 0.7); // Biru transparan
    glBegin(GL_QUADS);
    glVertex2i(900, 450); // kanan bawah
    glVertex2i(800, 450); // kiri bawah
    glVertex2i(800, 580); // kiri atas
    glVertex2i(900, 580); // kanan atas
    glEnd();

    glColor4f(0.0, 0.5, 1.0, 0.7); // Biru transparan
    glBegin(GL_QUADS);
    glVertex2i(550, 450); // kanan bawah
    glVertex2i(450, 450); // kiri bawah
    glVertex2i(450, 580); // kiri atas
    glVertex2i(550, 580); // kanan atas
    glEnd();

    // Tangga
    glColor3f(0.7, 0.7, 0.7); // Abu-abu
    glBegin(GL_QUADS);
    glVertex2i(780, 270); // kanan bawah
    glVertex2i(555, 270); // kiri bawah
    glVertex2i(555, 300); // kiri atas
    glVertex2i(780, 300); // kanan atas
    glEnd();

    glColor3f(0.7, 0.7, 0.7); // Abu-abu
    glBegin(GL_QUADS);
    glVertex2i(770, 300); // kanan bawah
    glVertex2i(565, 300); // kiri bawah
    glVertex2i(565, 330); // kiri atas
    glVertex2i(770, 330); // kanan atas
    glEnd();

    glColor3f(0.7, 0.7, 0.7); // Abu-abu
    glBegin(GL_QUADS);
    glVertex2i(760, 330); // kanan bawah
    glVertex2i(575, 330); // kiri bawah
    glVertex2i(575, 360); // kiri atas
    glVertex2i(760, 360); // kanan atas
    glEnd();

    glColor3f(0.7, 0.7, 0.7); // Abu-abu
    glBegin(GL_QUADS);
    glVertex2i(750, 360); // kanan bawah
    glVertex2i(585, 360); // kiri bawah
    glVertex2i(585, 390); // kiri atas
    glVertex2i(750, 390); // kanan atas
    glEnd();

    // Tiang
    glColor3f(0.8, 0.8, 0.8); // Abu-abu
    glBegin(GL_QUADS);
    glVertex2i(40, 310); // kiri bawah
    glVertex2i(55, 310); // kanan bawah
    glVertex2i(55, 650); // kanan atas
    glVertex2i(40, 650); // kiri atas
    glEnd();

    // Atap
    glColor3f(0.7, 0.7, 0.7); // Abu-abu
    glBegin(GL_QUADS);
    glVertex2i(980, 650); // kiri bawah
    glVertex2i(750, 900); // kanan bawah
    glVertex2i(250, 900); // kanan atas
    glVertex2i(435, 650); // kiri atas
    glEnd();

    // Atap kiri
    glColor3f(0.7, 0.7, 0.7); // Abu-abu
    glBegin(GL_TRIANGLES);
    glVertex2i(30, 650); // Sudut bawah kiri
    glVertex2i(435, 650); // Sudut bawah kanan
    glVertex2i(250, 900); // Atap
    glEnd();

    // Cover atap
    glColor3f(0.8, 0.8, 0.8); // Abu-abu
    glBegin(GL_QUADS);
    glVertex2i(45, 650); // kiri bawah
    glVertex2i(30, 650); // kanan bawah
    glVertex2i(250, 920); // kanan atas
    glVertex2i(250, 900); // kiri atas
    glEnd();

    glColor3f(0.8, 0.8, 0.8); // Abu-abu
    glBegin(GL_QUADS);
    glVertex2i(425, 650); // kiri bawah
    glVertex2i(440, 650); // kanan bawah
    glVertex2i(250, 920); // kanan atas
    glVertex2i(250, 900); // kiri atas
    glEnd();

    // Batas atas antara batas atas dan tiang
    glColor3f(0.9, 0.9, 0.9); // Abu-abu terang
    glBegin(GL_QUADS);
    glVertex2i(35, 270); // kiri bawah
    glVertex2i(50, 270); // kanan bawah
    glVertex2i(55, 310); // kanan atas
    glVertex2i(40, 310); // kiri atas
    glEnd();

    // Atas batas rumah 1
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); // Putih
    glVertex2i(15, 270); // kiri bawah
    glVertex2i(60, 270); // kanan bawah
    glVertex2i(60, 290); // kanan atas
    glVertex2i(15, 290); // kiri atas
    glEnd();

    // Batas bawah rumah 1
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.4, 0.4); // Abu-abu tua
    glVertex2i(20, 220); // kiri bawah
    glVertex2i(55, 220); // kanan bawah
    glVertex2i(55, 270); // kanan atas
    glVertex2i(20, 270); // kiri atas
    glEnd();

    // Tiang 2
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8); // Abu-abu
    glVertex2i(410, 310); // kiri bawah
    glVertex2i(425, 310); // kanan bawah
    glVertex2i(425, 650); // kanan atas
    glVertex2i(410, 650); // kiri atas
    glEnd();

    // Batas atas antara tiang dan batas atas rumah
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9); // Abu-abu terang
    glVertex2i(405, 270); // kiri bawah
    glVertex2i(420, 270); // kanan bawah
    glVertex2i(425, 310); // kanan atas
    glVertex2i(410, 310); // kiri atas
    glEnd();

    // Atas batas rumah 2
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); // Putih
    glVertex2i(385, 270); // kiri bawah
    glVertex2i(430, 270); // kanan bawah
    glVertex2i(430, 290); // kanan atas
    glVertex2i(385, 290); // kiri atas
    glEnd();

    // Batas bawah rumah 2
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.4, 0.4); // Abu-abu tua
    glVertex2i(390, 220); // kiri bawah
    glVertex2i(425, 220); // kanan bawah
    glVertex2i(425, 270); // kanan atas
    glVertex2i(390, 270); // kiri atas
    glEnd();

    // Tiang 3
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8); // Abu-abu
    glVertex2i(950, 310); // kiri bawah
    glVertex2i(965, 310); // kanan bawah
    glVertex2i(965, 650); // kanan atas
    glVertex2i(950, 650); // kiri atas
    glEnd();

    // Batas atas antara batas atas dan tiang 3
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9); // Abu-abu terang
    glVertex2i(950, 290); // kiri bawah
    glVertex2i(950, 310); // kanan bawah
    glVertex2i(965, 310); // kanan atas
    glVertex2i(965, 290); // kiri atas
    glEnd();

    // Atas batas rumah 3
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); // Putih
    glVertex2i(975, 270); // kiri bawah
    glVertex2i(930, 270); // kanan bawah
    glVertex2i(930, 290); // kanan atas
    glVertex2i(975, 290); // kiri atas
    glEnd();

    // Batas atas antara batas atas dan batas rumah 3
    glBegin(GL_QUADS);
    glColor3f(0.4, 0.4, 0.4); // Abu-abu tua
    glVertex2i(970, 220); // kiri bawah
    glVertex2i(935, 220); // kanan bawah
    glVertex2i(935, 270); // kanan atas
    glVertex2i(970, 270); // kiri atas
    glEnd();

    // Warna khusus untuk area antara batas rumah
    glColor3f(185.0f / 255.0f, 188.0f / 255.0f, 197.0f / 255.0f); // Warna abu-abu
    glBegin(GL_POLYGON);
    glVertex2i(425, 220); // kiri bawah
    glVertex2i(935, 220); // kanan bawah
    glVertex2i(935, 250); // kanan atas
    glVertex2i(425, 250); // kiri atas
    glEnd();

    // Batas Batas Garasi
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8); // Abu-abu gelap
    glVertex2i(100, 340); // kiri bawah
    glVertex2i(365, 340); // kanan bawah
    glVertex2i(365, 345); // kanan atas
    glVertex2i(100, 345); // kiri atas
    glEnd();

    // Batas Batas Garasi
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8); // Abu-abu gelap
    glVertex2i(100, 375); // kiri bawah
    glVertex2i(365, 375); // kanan bawah
    glVertex2i(365, 380); // kanan atas
    glVertex2i(100, 380); // kiri atas
    glEnd();

    // Batas Batas Garasi
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8); // Abu-abu gelap
    glVertex2i(100, 410); // kiri bawah
    glVertex2i(365, 410); // kanan bawah
    glVertex2i(365, 415); // kanan atas
    glVertex2i(100, 415); // kiri atas
    glEnd();

    // Batas Batas Garasi
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8); // Abu-abu gelap
    glVertex2i(100, 445); // kiri bawah
    glVertex2i(365, 445); // kanan bawah
    glVertex2i(365, 450); // kanan atas
    glVertex2i(100, 450); // kiri atas
    glEnd();

    // Batas Batas Garasi
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8); // Abu-abu gelap
    glVertex2i(100, 480); // kiri bawah
    glVertex2i(365, 480); // kanan bawah
    glVertex2i(365, 485); // kanan atas
    glVertex2i(100, 485); // kiri atas
    glEnd();

    // Batas Batas Garasi
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8); // Abu-abu gelap
    glVertex2i(100, 515); // kiri bawah
    glVertex2i(365, 515); // kanan bawah
    glVertex2i(365, 520); // kanan atas
    glVertex2i(100, 520); // kiri atas
    glEnd();


    glFlush(); // Process all OpenGL routines as quickly as possible.
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(1280, 800);
    glutCreateWindow("672021256_Tugas2");
    mulai();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}
