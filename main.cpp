#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void myInit(void)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glPointSize(8.0);
    glLineWidth(3.0);
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
}

void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3f(0.789, 0.50, 1.00);
    glVertex2i(10,50);
    glVertex2i(130,50);
    glVertex2i(130,200);
    glVertex2i(10,200);
    glEnd();
    glFlush();
}

int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(100, 150);
    glutCreateWindow("Coba GLUT");
    glutDisplayFunc(myDisplay);
    myInit();
    glutMainLoop();
}
