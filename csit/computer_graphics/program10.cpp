#include <GLUT/glut.h>

void draw()
{
    glClearColor(1, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POINTS);
    glVertex2i(500, 500);
    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("graphics window ");

    glutDisplayFunc(draw);
    glutMainLoop();

    return 0;
}