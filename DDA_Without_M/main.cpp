#include<iostream>
#include<GL/freeglut.h>

using namespace std;

double x1=20,y1=30,x2=100,y2=70;


void display(void){
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0.0,1.0,0.0);
  glPointSize(2);


  double x=x1,y=y1;

  double dx=x2-x1,dy=y2-y1;

  double steps=(abs(dx)>abs(dy))?abs(dx):abs(dy);

  double x_inc=dx/steps,y_inc=dy/steps;

  glBegin(GL_POINTS);

  for(int i=0;i<=steps;i++){
        glVertex2f(x,y);
        cout<<"("<<x<<","<<y<<")"<<endl;
        x=x+x_inc;
        y=y+y_inc;
  }

  glEnd();
  glFlush();

}

void init(void){
    glColor3f(1.0,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 200, 0, 200);

}



int main(int args, char**arvs){

    glutInit(&args,arvs);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(200,200);
    glutInitWindowSize(600,500);
    glutCreateWindow("DDA 1");

    init();
    glutDisplayFunc(display);
    glutMainLoop();
}
