//2D lab8 CG
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<iostream>
#include<process.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main(){
      int ab,g_driver=DETECT,g_mode;
      float x,y,tx,ty,x1,y1,x2,y2,x3,y3;
   int sx,sy;
float t,angle,ang;


initgraph(&g_driver,&g_mode,"C:\\TC\\BGI");

     x=getmaxx()/2;
     y=getmaxy()/2;
     x1=0;
     y1=0;
     x2=50;
     y2=0;
     x3=0;
     y3=-50;
     line(x-200,y,x+200,y);
     line(x,y-200,x,y+200);
     outtextxy(x+205,y,"X");
     outtextxy(x,y-205,"Y");
setcolor(BLUE);
     line(x+x1,y+y1,x+x2,y+y2);
     line(x+x3,y+y3,x+x1,y+y1);
     line(x+x3,y+y3,x+x2,y+y2);
setcolor(WHITE);
cout<<"choose the transformation\n1.translation\n2.rotation\n3.scaling"<<endl;
   cin>>ab;
	setcolor(RED);
   switch(ab){
   case 1:cout<<"enter tx and ty";
	cin>>tx>>ty;
	    x1+=tx;
	    x2+=tx;
	    x3+=tx;
	    y1+=ty;
	    y2+=ty;
	y3+=ty;
   line(x+x1,y+y1,x+x2,y+y2);
     line(x+x3,y+y3,x+x1,y+y1);
     line(x+x3,y+y3,x+x2,y+y2);
     getch();
	    break;
   case 2:  printf("\n The angle of rotation is");
scanf("%f",&ang);
angle=(ang*3.14)/180;
int a,b,c,d,e,f;
a=x+(x1)*cos(angle)-(y1)*sin(angle);
b=y+(x1)*sin(angle)+(y1)*cos(angle);
c=x+(x2)*cos(angle)-(y2)*sin(angle);
d=y+(x2)*sin(angle)+(y2)*cos(angle);
e=x+(x3)*cos(angle)-(y3)*sin(angle);
f=y+(x3)*sin(angle)+(y3)*cos(angle);
line(a,b,c,d);
line(c,d,e,f);
line(e,f,a,b);
getch();
break;
   case 3:
	printf("\n Enter the scalling factor");
	scanf("%d%d",&sx,&sy);
	 x1=x1*sx;
	 y1=y2*sy;
	 x2=x2*sx;
	 y2=y2*sy;
	 x3=x3*sx;
	 y3=y3*sy;
   line(x+x1,y+y1,x+x2,y+y2);
     line(x+x3,y+y3,x+x1,y+y1);
     line(x+x3,y+y3,x+x2,y+y2);
     getch();

   break;
default:cout<<"kunjan";
   }
getch();
closegraph();
return(0);
}

