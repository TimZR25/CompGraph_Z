		//#include <windows.h>
		//#include <GL/gl.h>
		//#include <GL/glu.h>
		//#include <glut.h>
		//
		//void  display(void)
		//{
		//    glColor3d(0.3, 0.7, 0.7);
		//
		//    glViewport(0, 0, 200, 200);
		//    glutSolidSphere(3.0, 25.0, 25.0);
		//    glViewport(0, 200, 200, 200);
		//    glutWireSphere(3.0, 25.0, 25.0);
		//
		//    glViewport(200, 0, 200, 200);
		//    glutSolidCube(2);
		//    glViewport(200, 200, 200, 200);
		//    glutWireCube(2);
		//
		//    glViewport(400, 0, 200, 200);
		//    glutSolidTorus(1.0, 2.0, 25.0, 25.0);
		//    glViewport(400, 200, 200, 200);
		//    glutWireTorus(1.0, 2.0, 25.0, 25.0);
		//
		//    glRotated(45, -1, 0, 0);
		//
		//    glViewport(600, 0, 200, 200);
		//    glutSolidCone(2.0, 4.0, 25.0, 1.0);
		//    glViewport(600, 200, 200, 200);
		//    glutWireCone(2.0, 4.0, 5.0, 1.0);
		//    
		//
		//    glFlush();
		//
		//}
		//void init(void)
		//{
		//    glEnable(GL_COLOR_MATERIAL);
		//    glEnable(GL_LIGHTING);
		//    glEnable(GL_LIGHT0);
		//    glEnable(GL_DEPTH_TEST);
		//    glClearColor(1.0, 1.0, 1.0, 1.0);
		//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		//    glMatrixMode(GL_PROJECTION);
		//    glLoadIdentity();
		//    glOrtho(-5.0, 5.0, -5.0, 5.0, 2.0, 12.0);
		//    gluLookAt(0, 0, 10, 0, 1, 0, 0, 1, 0);
		//    glMatrixMode(GL_MODELVIEW);
		//}
		//int main(int argc, char** argv)
		//{
		//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
		//    glutInitWindowPosition(100, 50);
		//    glutInitWindowSize(800, 400);
		//    glutCreateWindow("Shapes");
		//    init();
		//    glutDisplayFunc(display);
		//    glutMainLoop();
		//    return 0;
		//}