#include<stdio.h>
#include<iostream>
#include<graphics.h>
using namespace std;

int main(){
  int k=0,i=0;
  int gd=DETECT,gm;
   initgraph(&gd,&gm,"");
  float xk,yk,x2,y2,dx,dy,step,xinc,yinc,x[10],y[10];

  cout<<"enter the starting point"<<endl;
  cin>>xk>>yk;
  cout<<"enter the ending point"<<endl;
  cin>>x2>>y2;
  x[0]=xk;
  y[0]=yk;
  dx=x2-xk;
  dy=y2-yk;
  if(dx>dy)  step=dx;
  else  step=dy;
  xinc=dx/step;
  yinc=dy/step;
  cout<<"k\txk\tyk\txr\tyr"<<endl;

  while(xk!=x2 && yk!=y2){
  printf("%d\t%.2f\t%.2f\t%0.0f\t%0.0f\n",k,xk,yk,xk,yk);
    i++;
    xk=xinc+xk;
    yk=yinc+yk;
    x[i]=xk;
    y[i]=yk;

    k++;
  }
    printf("%d\t%.2f\t%.2f\t%0.0f\t%0.0f\n",k,xk,yk,xk,yk);

    rectangle(0,95,280,260);
    line(0,110,280,110);
    line(20,95,20,260);
    line(120,95,120,260);
    line(180,95,180,260);
    line(220,95,220,260);

  outtextxy(400,60,"OUTPUT");
  rectangle(400,80,500,150);
  for(i=0;i<k;i++){
   setcolor(WHITE);
   line(x[i]+400,y[i]+100,x[i+1]+400,y[i+1]+100);
    }
  getch();
  return 0;
}

