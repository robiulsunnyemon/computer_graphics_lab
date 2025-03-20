#include<iostream>
#include<cmath>
using namespace std;

drawline(double x1, double y1,double x2,double y2){

    double dx=x2-x1;
    double dy=y2-y1;
    double slope=dy/dx;
    double x=x1,y=y1;
    double x_last=x2,y_last=y2;
    if(slope<1){
        for(int i=1;i<x_last;i++){
        cout<<"("<<round(x)<<"  " <<round(y)<<")"<<endl;
        dx=1;
        x=x+dx;
        y=y+slope;
        }

    }else{
        for(int i=1;i<y_last;i++){
        cout<<"("<<round(x)<<"  " <<round(y)<<")"<<endl;
        dy=1;
        x=x+1/slope;
        y=y+dy;
        }

    }
}

int main(){
    double x1=2,y1=1,x2=10,y2=11;
    drawline(x1,y1,x2,y2);
}
