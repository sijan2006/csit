#define GL_SILENCE_DEPRECATION
#include <GLUT/glut.h>

void draw()
{
    glClearColor(0.2, 0.3, 0.4, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    /* glBegin(GL_LINES);
     glColor3f(1, 0, 0);
     glVertex2f(-0.3, 0.3);
     glColor3f(0, 1, 1);
     glVertex2f(0.3, -0.3);
     glEnd();
     */

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex2f(-0.2, 0.3);
    glColor3f(1, 1, 0);
    glVertex2f(-0.4, 0.0);
    glColor3f(1, 0, 0);
    glVertex2f(-0.2, -0.3);
    glColor3f(0, 0, 1);
    glVertex2f(0.2, -0.3);
    glColor3f(0, 1, 0);
    glVertex2f(0.2, 0.3);

    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Graphics Window");

    glutDisplayFunc(draw);
    glutMainLoop();

    return 0;
}