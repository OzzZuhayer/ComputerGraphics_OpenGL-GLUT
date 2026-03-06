#include <windows.h>
#include <GL/glut.h>

void renderBitmapString(float x, float y, float z, void *font, char *string)
{
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

void display()
{
    glClearColor(51.0f/255.0f, 51.0f/255.0f, 51.0f/255.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5.0);

    glColor3ub(4, 255, 80);

    glBegin(GL_LINES);
        glVertex2f(0.0f, 1.0f);
        glVertex2f(0.0f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
        glVertex2f(1.0f, 0.0f);
        glVertex2f(-1.0f, 0.0f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(450, 150);
    glutCreateWindow("Lab Evaluation - National Flags");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
