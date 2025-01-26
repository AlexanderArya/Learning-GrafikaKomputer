#include <GL/glut.h>

#define RATIO 1.200

#define WW 100 //WINDOWS WIDTH

#define WH (WW/RATIO) //WINDOWS HEIGHT

#define HALFX ((int)(WW/2))

#define HALFY ((int)(WH/2))

#define deltat .001

int WindowWidth; //SEBAGAI VARIABEL MENAMPUNG NILAI WW
int WindowHeight; //SEBAGAI VARIABEL MENAMPUNG NILAI WH


void Init(){

    /// Set mode matriks ke proyeksi dan reset matriks proyeksi
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    /// Mengatur proyeksi ortografis 2D
    gluOrtho2D(-HALFX, HALFX, -HALFY, HALFY);

    /// Set mode matriks kembali ke model view
    glMatrixMode(GL_MODELVIEW);

    /// Set warna latar belakang menjadi hitam
    glClearColor(0, 0, 0, 0);

    /// Mengaktifkan state array vertex untuk rendering
    glEnableClientState(GL_VERTEX_ARRAY);

    /// Mengaktifkan state array warna untuk rendering
    glEnableClientState(GL_COLOR_ARRAY);

    /// Mengatur model shading menjadi GL_SMOOTH
    glShadeModel(GL_SMOOTH);

    /// Mengatur viewport untuk keseluruhan window
    glViewport(0, 0, WindowWidth, WindowHeight);
    /// Mengatur viewport sesuai dengan WindowHeight yang baru

}


void Display(){

    /// Set lebar garis
    glLineWidth(4.0);

    /// Bentuk awal
    float startShape[12][2] = {
        {-15, -15},{-5, -15},{0, -5},
        {5, -15},{15, -15},{15, 25},
        {5, 25},{5, -5},{0, 0},
        {-5, -5},{-5, 25},{-15, 25}
    }; ///HURUF W

    /// Bentuk akhir
    float endShape[12][2] = {
        {-15, -15},{-5, -15},{-5, 10},
        {0, 0},{5, 10},{5, -15},
        {15, -15},{15, 25},{5, 25},
        {0, 15},{-5, 25},{-15, 25}
    }; ///HURUF M

    /// Bentuk antara
    float intermediateShape[12][2];

    /// Warna setiap titik
    float vertexColor[12][3] = {
        {1, 0, 0},{1, 1, 0},{1, 0, 1},{0, 1, 0},{0, 1, 1},{0, 0, 1},
        {1, 0.5, 0},{1, 0, 0.5},{0.5, 1, 0},{0.5, 0, 1},{1, 0, 0.5},{0, 1, 0.5}
    };

    /// Tweening parameter
    static float Tween = 0.0 - deltat;

    /// Update tweening
    if(Tween<1){
        Tween += deltat;
    }

    /// Menghitung bentuk antara
    for (int Vtx = 0; Vtx<12; Vtx++){
        intermediateShape[Vtx][0] = (1.0 - Tween)*startShape[Vtx][0] + Tween*endShape[Vtx][0];
        intermediateShape[Vtx][1] = (1.0 - Tween)*startShape[Vtx][1] + Tween*endShape[Vtx][1];
    }

    /// Mengatur pointer vertex
    glVertexPointer(2, GL_FLOAT, 0, intermediateShape);

    /// Mengatur pointer warna
    glColorPointer(3, GL_FLOAT, 0, vertexColor);

    /// Bersihkan layar
    glClear(GL_COLOR_BUFFER_BIT);

    /// Menggambar array vertex sebagai loop garis
    glDrawArrays(GL_LINE_LOOP, 0, 12);

    /// Tukar buffer dan lakukan redisplay
    glutSwapBuffers();
    glutPostRedisplay();
}

void Reshape(int w, int h){
    /// Atur ukuran jendela sesuai dengan proporsi RATIO
    WindowWidth = w;
    WindowHeight = (int)(w / RATIO);

    /// Perbarui viewport
    glViewport(0, 0, w, WindowHeight);

    /// Inisialisasi ulang viewport
    Init();
}

int main(int argc, char **argv){

    /// Inisialisasi GLUT
    glutInit(&argc, argv);

    /// Tentukan mode tampilan GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);

    /// Menghitung lebar jendela
    WindowWidth = (int)(glutGet((GLenum)GLUT_SCREEN_WIDTH) * 0.4);

    /// Menghitung tinggi jendela
    WindowHeight = (int)(WindowWidth / RATIO);

    /// Inisialisasi ukuran jendela
    glutInitWindowSize(WindowWidth, WindowHeight);

    /// Menentukan posisi jendela
    glutInitWindowPosition((int)(glutGet((GLenum)GLUT_SCREEN_WIDTH) * 0.1), (glutGet((GLenum)GLUT_SCREEN_HEIGHT) / 2) - (WindowHeight / 2));

    /// Membuat jendela dengan judul "TWEENING"
    glutCreateWindow("MATERI 3 - TWEENING");

    /// Mendaftarkan fungsi Display sebagai fungsi display
    glutDisplayFunc(Display);

    /// Mendaftarkan fungsi Reshape sebagai fungsi reshape
    glutReshapeFunc(Reshape);

    /// Inisialisasi pengaturan OpenGL
    Init();

    /// Memulai event loop GLUT
    glutMainLoop();
}
