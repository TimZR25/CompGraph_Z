#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <glut.h>

void  display(void)
{   

#pragma region FirstViewPort
    glViewport(0, 400, 400, 400);

    glColor3d(1, 1, 0);
    glLineWidth(3);
    glBegin(GL_LINES);
        glVertex2d(-5, -1);
        glVertex2d(4, 5);
    glEnd();

    glColor3d(0, 1, 0);
    glLineWidth(5);
    glBegin(GL_LINES);
        glVertex2d(-2, -2);
        glVertex2d(5, 3);
    glEnd();

    glColor3d(1, 0, 0);
    glEnable(GL_LINE_STIPPLE);
    glLineStipple(0.5, 58360);
    glLineWidth(3);
    glBegin(GL_LINES);
        glVertex2d(-4, 4);
        glVertex2d(5, -3);
    glEnd();
#pragma endregion

#pragma region SecondViewPort

#pragma endregion

#pragma region ThirdViewPort
    glViewport(0, 0, 400, 400);

    glPointSize(10);
    glColor3d(1, 1, 0);
    glEnable(GL_POINT_SMOOTH);  
    glBegin(GL_POINTS);
        glVertex2d(-3,4);
    glEnd();
    glDisable(GL_POINT_SMOOTH);

    glPointSize(20);
    glColor3d(0, 0, 1);
    glEnable(GL_POINT_SMOOTH);
    glBegin(GL_POINTS);
    glVertex2d(-5, -5);
    glEnd();
    glDisable(GL_POINT_SMOOTH);

    glPointSize(10);
    glColor3d(1, 0, 0);
    glBegin(GL_POINTS);
        glVertex2d(3, 3);
    glEnd();

    glPointSize(10);
    glColor3d(0, 1, 0);
    glBegin(GL_POINTS);
    glVertex2d(3, -4);
    glEnd();

#pragma endregion

#pragma region FourthViewPort

#pragma endregion

    

    glFlush();

}
void init(void)
{
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-6.0, 6.0, -6.0, 6.0, -1, 12);
    gluLookAt(0, 0, 5, 0, 0, 0, 0, 1, 0);
    glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char** argv)
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(100, 50);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Shapes");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}