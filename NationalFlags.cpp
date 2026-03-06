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

    // base of the flag
    glBegin(GL_QUADS);
        glColor3ub(218, 37, 28);
        glVertex2f(1.0f, 1.0f);
        glVertex2f(0.0f, 1.0f);
        glVertex2f(0.0f, 0.1f);
        glVertex2f(1.0f, 0.1f);
    glEnd();

    // center star
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

    // 2nd Quadrant - Flag of Greece

    // base of the flag
    glBegin(GL_QUADS);
        glColor3ub(13, 94, 175);
        glVertex2f(0.0f, 1.0f);
        glVertex2f(-1.0f, 1.0f);
        glVertex2f(-1.0f, 0.1f);
        glVertex2f(0.0f, 0.1f);
    glEnd();

    // white cross
    glColor3ub(255, 255, 255);

    glBegin(GL_QUADS);
        glVertex2f(-0.8f, 1.0f);
        glVertex2f(-0.7f, 1.0f);
        glVertex2f(-0.7f, 0.5f);
        glVertex2f(-0.8f, 0.5f);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(-1.0f, 0.8f);
        glVertex2f(-0.5f, 0.8f);
        glVertex2f(-0.5f, 0.7f);
        glVertex2f(-1.0f, 0.7f);
    glEnd();

    // white stripes
    glBegin(GL_QUADS);
        glVertex2f(-0.5f, 0.9f);
        glVertex2f(0.0f, 0.9f);
        glVertex2f(0.0f, 0.8f);
        glVertex2f(-0.5f, 0.8f);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(-0.5f, 0.7f);
        glVertex2f(0.0f, 0.7f);
        glVertex2f(0.0f, 0.6f);
        glVertex2f(-0.5f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(-1.0f, 0.5f);
        glVertex2f(0.0f, 0.5f);
        glVertex2f(0.0f, 0.4f);
        glVertex2f(-1.0f, 0.4f);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(-1.0f, 0.3f);
        glVertex2f(0.0f, 0.3f);
        glVertex2f(0.0f, 0.2f);
        glVertex2f(-1.0f, 0.2f);
    glEnd();

    // 3rd Quadrant - Flag of Tonga

    // base of the flag
    glColor3ub(194, 0, 0);
    glBegin(GL_QUADS);
        glVertex2f(-1.0f, -0.1f);
        glVertex2f(0.0f, -0.1f);
        glVertex2f(0.0f, -1.0f);
        glVertex2f(-1.0f, -1.0f);
    glEnd();

    // white portion
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
        glVertex2f(-0.6f, -0.1f);
        glVertex2f(-1.0f, -0.1f);
        glVertex2f(-1.0f, -0.5f);
        glVertex2f(-0.6f, -0.5f);
    glEnd();

    // red cross
    glColor3ub(194, 0, 0);
    glLineWidth(18.0f);
    glBegin(GL_LINES);
        glVertex2f(-0.8f, -0.2f);
        glVertex2f(-0.8f, -0.4f);
    glEnd();
    glBegin(GL_LINES);
        glVertex2f(-0.9f, -0.3f);
        glVertex2f(-0.7f, -0.3f);
    glEnd();

    glLineWidth(1.0f);
    glColor3ub(255, 255, 255);

    // 4th Quadrant - Flag of Isr@el

    // base of the flag
    glBegin(GL_QUADS);
        glVertex2f(0.0f, -0.1f);
        glVertex2f(1.0f, -0.1f);
        glVertex2f(1.0f, -1.0f);
        glVertex2f(0.0f, -1.0f);
    glEnd();

    // blue stripes
    glColor3ub(0, 56, 149);

    glBegin(GL_QUADS);
        glVertex2f(0.0f, -0.1f);
        glVertex2f(1.0f, -0.1f);
        glVertex2f(1.0f, -0.2f);
        glVertex2f(0.0f, -0.2f);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(0.0f, -0.9f);
        glVertex2f(0.0f, -1.0f);
        glVertex2f(1.0f, -1.0f);
        glVertex2f(1.0f, -0.9f);
    glEnd();

    // triangles
    glLineWidth(8.5f);

    glBegin(GL_LINE_LOOP);
        glVertex2f(0.3f, -0.4f);
        glVertex2f(0.5f, -0.7f);
        glVertex2f(0.7f, -0.4f);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glVertex2f(0.3f, -0.6f);
        glVertex2f(0.7f, -0.6f);
        glVertex2f(0.5f, -0.3f);
    glEnd();

    glLineWidth(1.0f);

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
