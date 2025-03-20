#include<iostream>
#include<GL/freeglut.h>
using namespace std;

double x1=20,y1=30,x2=100,y2=70;


void display(void){

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0);
    glPointSize(2);


    double dx=x2-x1;
    double dy=y2-y1;
    double slope=dy/dx;
    double x=x1,y=y1;
    double x_last=x2,y_last=y2;

    glBegin(GL_POINTS);

    if(slope<1){
        for(int i=1;i<x_last;i++){
        cout<<"("<<x<<"  " <<y<<")"<<endl;
        glVertex2d(x,y);
        dx=1;
        x=x+dx;
        y=y+slope;
        }

    }else{
        for(int i=1;i<=y_last;i++){
        cout<<"("<<x<<"  " <<y<<")"<<endl;
        glVertex2d(x,y);
        dy=1;
        x=x+1/slope;
        y=y+dy;
        }

    }

    glEnd();
    glFlush();


}

void init(void){

    glColor3f(1.0,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0,200,0,200);


}




int main(int args, char**arvs){

    glutInit(&args,arvs);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(200,200);
    glutInitWindowSize(600,500);
    glutCreateWindow("DDA With Slope");

    init();
    glutDisplayFunc(display);
    glutMainLoop();
}
