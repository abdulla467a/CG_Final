//Abdulla al Shayat ID: 182-15-2105
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 40.0, 0.0, 45.0);
}

void baloon(double x, double y, double z)
{
    float theta;
    int i;
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(x+z*cos(theta),y+z*sin(theta));
    }
    glEnd();
}

void output()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.00, 0.33, 0.96);
    baloon(15,15,4);

    glColor3f(1.00, 0.33, 0.96);
    baloon(15,13.8,3.6);

    glColor3f(1.00, 0.33, 0.96);
    baloon(15,12.1,2.7);

     glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(15,9.5);
    glVertex2f(13,8);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(13,8);
    glVertex2f(13,4);
    glEnd();


    glFlush();
    glutSwapBuffers();
}

int main(int argc,char **argv)
{


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(100,100);
    glutInitWindowSize(500,550);
    glutCreateWindow("Ballon By Abdulla al Shayat ID: 182-15-2105");
    init();
    glutDisplayFunc(output);
    glutMainLoop();
    return 0;
}
