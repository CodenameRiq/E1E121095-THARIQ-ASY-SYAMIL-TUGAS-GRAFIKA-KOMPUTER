#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void init(void); // tempat nya menggambar
void draw(void); // gambarannya

main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(400, 250);
    glutInitWindowPosition(500, 100);               // syntax bawaannya
    glutCreateWindow("Tugas Garis");
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);   // warna backgroundnya
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();                             // syntax bawaannya
    glOrtho(0.0,10.0,0.0,10.0,-10.0, 10.0);
}

void draw(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(5.0);
    glBegin(GL_LINES);

    glColor3f(1.0, 0.0, 0.0);   //Warna Garis
    glVertex3f(7.0, 5.0, 0.0);  // Koordinat Titik 2
    glVertex3f(3.0, 5.0, 0.0);  // Koordinat Titik 1

    glEnd();

    glutSwapBuffers();
}

