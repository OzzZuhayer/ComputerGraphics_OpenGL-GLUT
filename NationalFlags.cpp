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

    // Quadrant borders
    glColor3ub(4, 255, 80);

    glBegin(GL_LINES);
        glVertex2f(0.0f, 1.0f);
        glVertex2f(0.0f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
        glVertex2f(1.0f, 0.0f);
        glVertex2f(-1.0f, 0.0f);
    glEnd();

    glColor3ub(255, 255, 255);

    // 1st Quadrant - Flag of Vietnam

    // Red for base of the flag
    glBegin(GL_QUADS);
        glColor3ub(218, 37, 28);
        glVertex2f(1.0f, 1.0f);
        glVertex2f(0.0f, 1.0f);
        glVertex2f(0.0f, 0.1f);
        glVertex2f(1.0f, 0.1f);
    glEnd();

    // Center star
    glBegin(GL_POLYGON);
        glColor3ub(255, 255, 1);
        glVertex2f(0.55f, 0.6f);
        glVertex2f(0.5f, 0.7f);
        glVertex2f(0.45f, 0.6f);
        glVertex2f(0.32f, 0.6f);
        glVertex2f(0.42f, 0.5f);
        glVertex2f(0.37f, 0.37f);
        glVertex2f(0.5f, 0.45f);
        glVertex2f(0.62f, 0.37f);
        glVertex2f(0.57f, 0.5f);
        glVertex2f(0.67f, 0.6f);
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
