#include<iostream>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main(){
      int x,y,x_center,y_center,a,b;
      float a_sqr,b_sqr, fx,fy, d,tmp1,tmp2;
      int g_driver=DETECT,g_mode;

    initgraph(&g_driver,&g_mode,"C:\\TC\\BGI");
    printf("MID POINT ELLIPSE ALGORITHM");
    printf("\n\n Enter coordinate x and y = ");
    scanf("%d%d",&x_center,&y_center);
    printf("\n Now enter constants a and b = ");
    scanf("%d%d",&a,&b);
    x=0;
    y=b;
    line(x_center-100,y_center,x_center+100,y_center);
line(x_center,y_center-100,x_center,y_center+100);
outtextxy(x_center+105,y_center,"X");
outtextxy(x_center,y_center-105,"Y");
outtextxy(x_center+a,y_center-10,"(rx,0)");
outtextxy(x_center,y_center-b-10,"(0,ry)");
line(350,150,340,160);
outtextxy(365,150,"(x,y)");
line(250,150,260,160);
outtextxy(190,150,"(-x,y)");
line(340,240,350,250);
outtextxy(380,250,"(x,-y)");
line(260,240,250,250);
outtextxy(180,250,"(-x,-y)");
    a_sqr=a*a;
    b_sqr=b*b;
    fx=2*b_sqr*x;
    fy=2*a_sqr*y;
  d=b_sqr-(a_sqr*b)+(a_sqr*0.25);
  do
   {
  putpixel(x_center+x,y_center+y,1);
  putpixel(x_center-x,y_center-y,2);
  putpixel(x_center+x,y_center-y,3);
  putpixel(x_center-x,y_center+y,4);
   if(d<0)
    {
  d=d+fx+b_sqr;
    }
   else
  {
  y--;
  d=d+fx-fy+b_sqr;
  fy=2*a_sqr*y;
  }
  x++;
  fx=2*b_sqr*x;
   }
   while(fx<=fy);
   tmp1=(x+0.5)*(x+0.5);
   tmp2=(y-1)*(y-1);
   d=b_sqr*tmp1+a_sqr*tmp2-(a_sqr*b_sqr);
   do
   {
  putpixel(x_center+x,y_center+y,1);
  putpixel(x_center-x,y_center-y,2);
  putpixel(x_center+x,y_center-y,3);
  putpixel(x_center-x,y_center+y,4);
   if(d>=0)
  d=d-fy+a_sqr;
   else
  {
  x++;
  d=d+fx-fy+a_sqr;
  fx=2*b_sqr*x;
  }
   y--;
   fy=2*a_sqr*y;
   }
   while(y>=0);
      return 0;
   getch();


}

