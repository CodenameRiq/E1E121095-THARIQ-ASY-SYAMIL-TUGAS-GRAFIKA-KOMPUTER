#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void init(void);
void draw(void);

main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("titik_titik");
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,10.0,0.0,10.0,-10.0, 10.0);
}

void draw(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glPointSize(9.0);           // ukuran poin
    glBegin(GL_POINTS);

    glColor3f(1.0, 0.0, 0.0);   //Warna Merah
    glVertex3f(4.0, 8.0, 0.0);  // Koordinat Titik 1
    glColor3f(0.0, 2.0, 0.0);
    glVertex3f(5.0, 8.0, 0.0);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(6.0, 8.0, 0.0);
    glColor3f(255, 255, 0.0);
    glVertex3f(5.0, 6.0, 0.0);
    glColor3f(0.0, 0.0, 255);
    glVertex3f(6.0, 6.0, 0.0);
    glColor3f(255, 0.0, 128);
    glVertex3f(7.0, 6.0, 0.0);

    glEnd();

    glLineWidth(2.0);           // ketebalan garis
    glBegin(GL_LINES);

    glColor3f(255,255,255);

    glVertex3f(4.0,5.0,0.0);    // Garis Pertama
    glVertex3f(8.0,5.0,0.0);


    glVertex3f(8.0,5.0,0.0);    // Garis Kedua
    glVertex3f(7.0,9.0,0.0);

    glVertex3f(7.0,9.0,0.0);    // Garis Ketiga
    glVertex3f(3.0,9.0,0.0);

    glVertex3f(3.0,9.0,0.0);    // Garis Keempat
    glVertex3f(4.0,5.0,0.0);

    glEnd();

    glutSwapBuffers();

}
