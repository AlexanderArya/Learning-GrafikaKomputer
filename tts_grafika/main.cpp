#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);




    glColor3f(0.9, 0.9, 0.9);

     // Menggambar kotak
    glBegin(GL_QUADS);
    //kiri bawah
    glVertex2f(-0.7, -0.7);
    //kanan bawah
    glVertex2f(-0.3 ,-0.7);
    //kanan atas
    glVertex2f(-0.3, 0.50);
    //kiri atas
    glVertex2f(-0.7, 0.50);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);

     // Menggambar kotak
    glBegin(GL_QUADS);
    //kiri bawah
    glVertex2f(-0.3, -0.7);
    //kanan bawah
    glVertex2f(0.6 ,-0.7);
    //kanan atas
    glVertex2f(0.6, 0.4 );
    //kiri atas
    glVertex2f(-0.3, 0.4);
    glEnd();


      // Biru tembok kanan fti

    glColor3f(0.0196, 0.3216, 0.6039);

     // Menggambar kotak
    glBegin(GL_QUADS);
    //kiri bawah
    glVertex2f(-0.31, 0.42);
    //kanan bawah
    glVertex2f(0.55,0.42);
    //kanan atas
    glVertex2f(0.55, 0.36);
    //kiri atas
    glVertex2f(-0.31, 0.36);
    glEnd();

      // Biru tembok kanan fti

    glColor3f(0.0196, 0.3216, 0.6039);

     // Menggambar kotak
    glBegin(GL_QUADS);
    //kiri bawah
    glVertex2f(0.3, -0.25);
    //kanan bawah
    glVertex2f(0.55 ,-0.25);
    //kanan atas
    glVertex2f(0.55, -0.2);
    //kiri atas
    glVertex2f(0.3, -0.2);
    glEnd();

    //bagian kanan biru fti

    glColor3f(0.0196, 0.3216, 0.6039);

     // Menggambar kotak
    glBegin(GL_QUADS);
    //kiri bawah
    glVertex2f(0.52, 0.4);
    //kanan bawah
    glVertex2f(0.52,-0.20);
    //kanan atas
    glVertex2f(0.55, -0.20);
    //kiri atas
    glVertex2f(0.55, 0.4);
    glEnd();

    //bagian bawah 2 biru fti

    glColor3f(0.0196, 0.3216, 0.6039);

     // Menggambar kotak
    glBegin(GL_QUADS);
    //kiri bawah
    glVertex2f(0.3, 0.085);
    //kanan bawah
    glVertex2f(0.3,-0.20);
    //kanan atas
    glVertex2f(0.33,-0.20);
    //kiri atas
    glVertex2f(0.33, 0.090);
    glEnd();


      // Biru tembok kanan fti

    glColor3f(0.0196, 0.3216, 0.6039);

     // Menggambar kotak
    glBegin(GL_QUADS);
    //kiri bawah
    glVertex2f(0.05, 0.13);
    //kanan bawah
    glVertex2f(0.33,0.13);
    //kanan atas
    glVertex2f(0.33, 0.08);
    //kiri atas
    glVertex2f(0.05, 0.08);
    glEnd();

    //bagian bawah 2 biru fti

    glColor3f(0.0196, 0.3216, 0.6039);

     // Menggambar kotak
    glBegin(GL_QUADS);
    //kiri bawah
    glVertex2f(0.05, 0.1);
    //kanan bawah
    glVertex2f(0.05,-0.3);
    //kanan atas
    glVertex2f(0.08, -0.3);
    //kiri atas
    glVertex2f(0.08, 0.1);
    glEnd();

    //bawah kiri
    glColor3f(0.0196, 0.3216, 0.6039);

     // Menggambar kotak
    glBegin(GL_QUADS);
    //kiri bawah
    glVertex2f(-0.31, -0.25);
    //kanan bawah
    glVertex2f(0.05,-0.25);
    //kanan atas
    glVertex2f(0.05, -0.30);
    //kiri atas
    glVertex2f(-0.31, -0.30);
    glEnd();

    //bagian bawah 2 biru fti

    glColor3f(0.0196, 0.3216, 0.6039);

     // Menggambar kotak
    glBegin(GL_QUADS);
    //kiri bawah
    glVertex2f(-0.31, 0.37);
    //kanan bawah
    glVertex2f(-0.31,-0.25);
    //kanan atas
    glVertex2f(-0.28, -0.25);
    //kiri atas
    glVertex2f(-0.28, 0.37);
    glEnd();


    //kotak kiri

     glColor3f(1.0, 1.0, 1.0);

     // Menggambar kotak
    glBegin(GL_QUADS);
    //kiri bawah
    glVertex2f(-0.9, -0.7);
    //kanan bawah
    glVertex2f(-0.7 ,-0.7);
    //kanan atas
    glVertex2f(-0.7, 0.40);
    //kiri atas
    glVertex2f(-0.9, 0.40);
    glEnd();


    //bagian bawah 2 biru fti
    glColor3f(0.0196, 0.3216, 0.6039);

     // Menggambar kotak
    glBegin(GL_QUADS);
    //kiri bawah
    glVertex2f(-0.71, 0.29);
    //kanan bawah
    glVertex2f(-0.71,-0.25);
    //kanan atas
    glVertex2f(-0.68, -0.25);
    //kiri atas
    glVertex2f(-0.68, 0.29);
    glEnd();

    //bagian bawah 2 biru fti
    glColor3f(0.0196, 0.3216, 0.6039);

     // Menggambar kotak
    glBegin(GL_QUADS);
    //kiri bawah
    glVertex2f(-0.88, 0.31);
    //kanan bawah
    glVertex2f(-0.88,-0.25);
    //kanan atas
    glVertex2f(-0.85, -0.25);
    //kiri atas
    glVertex2f(-0.85, 0.31);
    glEnd();


    glColor3f(0.0196, 0.3216, 0.6039);
     // Menggambar kotak
    glBegin(GL_QUADS);
    //kiri bawah
    glVertex2f(-0.88, -0.21);
    //kanan bawah
    glVertex2f(-0.68,-0.21);
    //kanan atas
    glVertex2f(-0.68, -0.27);
    //kiri atas
    glVertex2f(-0.88, -0.27);
    glEnd();



    glColor3f(0.0196, 0.3216, 0.6039);
     // Menggambar kotak
    glBegin(GL_QUADS);
    //kiri bawah
    glVertex2f(-0.85, 0.31);
    //kanan bawah
    glVertex2f(-0.68,0.31);
    //kanan atas
    glVertex2f(-0.68, 0.24);
    //kiri atas
    glVertex2f(-0.85, 0.24);
    glEnd();


     // Gambar pentagon
    glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_POLYGON);
    // Koordinat untuk pentagon
    glVertex2f(-0.7, 0.5); // Titik bawah kiri
    glVertex2f(-0.65, 0.42); // Titik bawah kanan
    glVertex2f(-0.6, 0.38); // Titik bawah kanan
    glVertex2f(-0.5, 0.35); // Titik atas tengah
    glVertex2f(-0.4, 0.38); // Titik bawah kiri
    glVertex2f(-0.35, 0.42); // Titik bawah kanan
    glVertex2f(-0.3, 0.5); // Titik bawah kanan
    glEnd();

    glColor3f(1.0, 1.0, 1.0); // Mengatur warna menjadi putih
    glBegin(GL_LINES); // Menggunakan GL_LINES untuk menggambar garis
    glVertex2f(-0.65, 0.42); // Titik awal garis
    glVertex2f(-0.65, -0.4); // Titik akhir garis
    glEnd(); // Mengakhiri penggambaran garis


    glColor3f(1.0, 1.0, 1.0); // Mengatur warna menjadi putih
    glBegin(GL_LINES); // Menggunakan GL_LINES untuk menggambar garis
    glVertex2f(-0.6, 0.38); // Titik awal garis
    glVertex2f(-0.6, -0.4); // Titik akhir garis
    glEnd(); // Mengakhiri penggambaran garis

    glColor3f(1.0, 1.0, 1.0); // Mengatur warna menjadi putih
    glBegin(GL_LINES); // Menggunakan GL_LINES untuk menggambar garis
    glVertex2f(-0.5, 0.35); // Titik awal garis
    glVertex2f(-0.5, -0.4); // Titik akhir garis
    glEnd(); // Mengakhiri penggambaran garis

    glColor3f(1.0, 1.0, 1.0); // Mengatur warna menjadi putih
    glBegin(GL_LINES); // Menggunakan GL_LINES untuk menggambar garis
    glVertex2f(-0.4, 0.38); // Titik awal garis
    glVertex2f(-0.4, -0.4); // Titik akhir garis
    glEnd(); // Mengakhiri penggambaran garis

    glColor3f(1.0, 1.0, 1.0); // Mengatur warna menjadi putih
    glBegin(GL_LINES); // Menggunakan GL_LINES untuk menggambar garis
    glVertex2f(-0.35, 0.42); // Titik awal garis
    glVertex2f(-0.35, -0.4); // Titik akhir garis
    glEnd(); // Mengakhiri penggambaran garis

    glColor3f(0.68, 0.85, 0.90);
    glBegin(GL_QUADS);
    glVertex2f(0.52, 0.32);
    glVertex2f(0.52, 0.36);
    glVertex2f(-0.28, 0.36);
    glVertex2f(-0.28, 0.32);
    glEnd();



    glColor3f(0.68, 0.85, 0.90);
    glBegin(GL_QUADS);
    glVertex2f(0.52, 0.20);
    glVertex2f(0.52, 0.25);
    glVertex2f(-0.28, 0.25);
    glVertex2f(-0.28, 0.20);
    glEnd();

    glColor3f(0.68, 0.85, 0.90);
    glBegin(GL_QUADS);
    glVertex2f(0.05, 0.06);
    glVertex2f(0.05, 0.12);
    glVertex2f(-0.28, 0.12);
    glVertex2f(-0.28, 0.06);
    glEnd();

    glColor3f(0.68, 0.85, 0.90);
    glBegin(GL_QUADS);
    glVertex2f(0.05, -0.07);
    glVertex2f(0.05, 0.0);
    glVertex2f(-0.28, 0.0);
    glVertex2f(-0.28, -0.07);
    glEnd();

    glColor3f(0.68, 0.85, 0.90);
    glBegin(GL_QUADS);
    glVertex2f(0.52,-0.07);
    glVertex2f(0.52, 0.0);
    glVertex2f(0.333, 0.0);
    glVertex2f(0.333, -0.07);
    glEnd();

    glColor3f(0.68, 0.85, 0.90);

    glBegin(GL_QUADS);
    glVertex2f(0.05, -0.21);
    glVertex2f(0.05, -0.15);
    glVertex2f(-0.28, -0.15);
    glVertex2f(-0.28, -0.21);
    glEnd();

    glColor3f(0.68, 0.85, 0.90);
    //glColor3f(1.0,0.0,0.0);
    glBegin(GL_QUADS);
    glVertex2f(-0.71,-0.06);
    glVertex2f(-0.71, 0.0);
    glVertex2f(-0.85, 0.0);
    glVertex2f(-0.85, -0.06);
    glEnd();


    glColor3f(0.68, 0.85, 0.90);

    glBegin(GL_QUADS);
    glVertex2f(-0.71,0.07);
    glVertex2f(-0.71, 0.13);
    glVertex2f(-0.85, 0.13);
    glVertex2f(-0.85, 0.07);
    glEnd();

    glColor3f(0.68, 0.85, 0.90);
    glBegin(GL_QUADS);
    glVertex2f(-0.71,0.18);
    glVertex2f(-0.71, 0.24);
    glVertex2f(-0.85, 0.24);
    glVertex2f(-0.85, 0.18);
    glEnd();

    //garis

    glLineWidth(3.0);
    glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES);
    glVertex2f(0.55, 0.25); // Titik awal garis
    glVertex2f(-0.28, 0.25); // Titik akhir garis
    glEnd();

    glLineWidth(3.0);
    glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES);
    glVertex2f(0.55, 0.12); // Titik awal garis
    glVertex2f(-0.28, 0.12); // Titik akhir garis
    glEnd();

    glLineWidth(3.0);
    glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES);
    glVertex2f(0.55, -0.01); // Titik awal garis
    glVertex2f(0.30, -0.01); // Titik akhir garis
    glEnd();

    glLineWidth(3.0);
    glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES);
    glVertex2f(-0.3, -0.01); // Titik awal garis
    glVertex2f(0.08, -0.01); // Titik akhir garis
    glEnd();

    glLineWidth(3.0);
    glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES);
    glVertex2f(-0.3, -0.15); // Titik awal garis
    glVertex2f(0.08, -0.15); // Titik akhir garis
    glEnd();

    glLineWidth(3.0);
    glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES);
    glVertex2f(0.55, -0.15); // Titik awal garis
    glVertex2f(0.30, -0.15); // Titik akhir garis
    glEnd();

    glLineWidth(3.0);
    glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES);
    glVertex2f(0.43, 0.38); // Titik awal garis
    glVertex2f(0.43, -0.25); // Titik akhir garis
    glEnd();

    glLineWidth(3.0);
    glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES);
    glVertex2f(0.33, 0.38); // Titik awal garis
    glVertex2f(0.33, -0.25); // Titik akhir garis
    glEnd();

    glLineWidth(3.0);
    glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES);
    glVertex2f(0.19, 0.38); // Titik awal garis
    glVertex2f(0.19, 0.12); // Titik akhir garis
    glEnd();


    glLineWidth(3.0);
    glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES);
    glVertex2f(0.03, 0.38); // Titik awal garis
    glVertex2f(0.03, -0.25); // Titik akhir garis
    glEnd();

    glLineWidth(3.0);
    glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES);
    glVertex2f(-0.13, 0.38); // Titik awal garis
    glVertex2f(-0.13, -0.25); // Titik akhir garis
    glEnd();

    glLineWidth(3.0);
    glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES);
    glVertex2f(-0.13, 0.38); // Titik awal garis
    glVertex2f(-0.13, -0.25); // Titik akhir garis
    glEnd();

    glLineWidth(3.0);
    glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES);
    glVertex2f(-0.71, 0.13); // Titik awal garis
    glVertex2f(-0.85, 0.13); // Titik akhir garis
    glEnd();

    glLineWidth(3.0);
    glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES);
    glVertex2f(-0.71, -0.0); // Titik awal garis
    glVertex2f(-0.85, -0.0); // Titik akhir garis
    glEnd();

    glLineWidth(3.0);
    glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES);
    glVertex2f(-0.71, -0.12); // Titik awal garis
    glVertex2f(-0.85, -0.12); // Titik akhir garis
    glEnd();


    glColor3f(0.95,0.95,0.95);
    glBegin(GL_QUADS);
    glVertex2f(-0.55,-0.5);
    glVertex2f(-0.55,-0.25);
    glVertex2f(-0.85,-0.25);
    glVertex2f(-0.85,-0.5);
    glEnd();


    glColor3f(0.68, 0.85, 0.90);
    glBegin(GL_QUADS);
    glVertex2f(-0.60,-0.3);
    glVertex2f(-0.60,-0.35);
    glVertex2f(-0.80,-0.35);
    glVertex2f(-0.80,-0.3);
    glEnd();

        glLineWidth(5.0);

    glColor3f(0.5,0.5,0.5);
    glBegin(GL_LINES);
    glVertex2f(0.23, -0.05); // Titik awal garis
    glVertex2f(0.23, -0.50); // Titik akhir garis
    glEnd();


    glLineWidth(5.0);
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_LINES);
    glVertex2f(0.03, -0.05); // Titik awal garis
    glVertex2f(0.03, -0.50); // Titik akhir garis
    glEnd();


    glLineWidth(5.0);
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_LINES);
    glVertex2f(-0.23, -0.05); // Titik awal garis
    glVertex2f(-0.23, -0.50); // Titik akhir garis
    glEnd();

    glLineWidth(5.0);
   glColor3f(0.5,0.5,0.5);
    glBegin(GL_LINES);
    glVertex2f(-0.43, -0.05); // Titik awal garis
    glVertex2f(-0.43, -0.50); // Titik akhir garis
    glEnd();

    glLineWidth(5.0);

    glColor3f(0.5,0.5,0.5);
    glBegin(GL_LINES);
    glVertex2f(-0.63, -0.05); // Titik awal garis
    glVertex2f(-0.63, -0.50); // Titik akhir garis
    glEnd();

    // Mengatur warna kotak menjadi putih
    glColor3f(0.8, 0.8, 0.8);

    // Menggambar kotak sederhana
    glBegin(GL_QUADS);
    glVertex2f(-0.65, -0.25);  // Kiri bawah
    glVertex2f(-0.65, -0.05);   // Kiri atas
    glVertex2f(0.25, -0.05);   // Kanan atas
    glVertex2f(0.25, -0.25);  // Kanan bawah
    glEnd();


    //F
    glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES); // Menggunakan GL_LINES untuk menggambar garis
    glVertex2f(-0.35, -0.08); // Titik awal garis
    glVertex2f(-0.35, -0.22); // Titik akhir garis
    glEnd(); // Mengakhiri penggambaran garis


glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES); // Menggunakan GL_LINES untuk menggambar garis
    glVertex2f(-0.30, -0.08); // Titik awal garis
    glVertex2f(-0.35, -0.08); // Titik akhir garis
    glEnd();


   glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES); // Menggunakan GL_LINES untuk menggambar garis
    glVertex2f(-0.30, -0.15); // Titik awal garis
    glVertex2f(-0.35, -0.15); // Titik akhir garis
    glEnd();


    //T
    glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES); // Menggunakan GL_LINES untuk menggambar garis
    glVertex2f(-0.15, -0.08); // Titik awal garis
    glVertex2f(-0.15, -0.22); // Titik akhir garis
    glEnd(); // Mengakhiri penggambaran garis

    glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES); // Menggunakan GL_LINES untuk menggambar garis
    glVertex2f(-0.20, -0.08); // Titik awal garis
    glVertex2f(-0.10, -0.08); // Titik akhir garis
    glEnd(); // Mengakhiri penggambaran garis

    //I
    glColor3f(0.0196, 0.3216, 0.6039);
    glBegin(GL_LINES); // Menggunakan GL_LINES untuk menggambar garis
    glVertex2f(0.0, -0.08); // Titik awal garis
    glVertex2f(0.0, -0.22); // Titik akhir garis
    glEnd(); // Mengakhiri penggambaran garis


    //Tanah

    // Mengatur warna kotak menjadi hijau
    glColor3f(0.0, 0.5, 0.0);

    // Menggambar kotak
    glBegin(GL_QUADS);
    //kiri bawah
    glVertex2f(-1.0, -1.0);
    //kanan bawah
    glVertex2f(1.0, -1.0);
    //kanan atas
    glVertex2f(1.0, -0.7);
    //kiri atas
    glVertex2f(-1.0, -0.7);
    glEnd();

    // Mengatur warna kotak menjadi hijau
    glColor3f(0.5, 0.5, 0.5);

    // Menggambar kotak
    glBegin(GL_QUADS);
    //kiri bawah
    glVertex2f(-1.0, -0.7);
    //kanan bawah
    glVertex2f(1.0, -0.7);
    //kanan atas
    glVertex2f(1.0, -0.6);
    //kiri atas
    glVertex2f(-1.0, -0.6);
    glEnd();

    // Mengatur warna kotak menjadi hijau
    glColor3f(0.8, 0.8, 0.8);

    // Menggambar kotak
    glBegin(GL_QUADS);
    //kiri bawah
    glVertex2f(-0.75, -0.6);
    //kanan bawah
    glVertex2f(1.0, -0.6);
    //kanan atas
    glVertex2f(1.0, -0.5);
    //kiri atas
    glVertex2f(-0.7, -0.5);
    glEnd();



    // Mengatur warna kotak menjadi hijau
    glColor3f(0.0, 0.5, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.5, -0.4);    // Puncak segitiga
    glVertex2f(0.3, -0.8);  // Sudut kiri bawah
    glVertex2f(0.5, -0.8);   // Sudut kanan bawah
    glEnd();

    // Mengatur warna kotak menjadi hijau
    glColor3f(0.0, 0.5, 0.0);

     // Menggambar kotak
    glBegin(GL_QUADS);
    //kiri bawah
    glVertex2f(0.5, -0.7);
    //kanan bawah
    glVertex2f(1.0, -0.7);
    //kanan atas
    glVertex2f(1.0, -0.4);
    //kiri atas
    glVertex2f(0.5, -0.4);
    glEnd();

    // Mengatur warna kotak menjadi hijau
    glColor3f(0.0, 0.5, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.8, -0.1);    // Puncak segitiga
    glVertex2f(0.6, -0.4);  // Sudut kiri bawah
    glVertex2f(0.8, -0.4);   // Sudut kanan bawah
    glEnd();

        // Mengatur warna kotak menjadi hijau
    glColor3f(0.0, 0.5, 0.0);

     // Menggambar kotak
    glBegin(GL_QUADS);
    //kiri bawah
    glVertex2f(0.8, -0.4);
    //kanan bawah
    glVertex2f(1.0, -0.4);
    //kanan atas
    glVertex2f(1.0, -0.1);
    //kiri atas
    glVertex2f(0.8, -0.1);
    glEnd();


    glFlush();
}

void init() {
    glClearColor(0.6, 0.8, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Kotak menggunakan GLUT");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
