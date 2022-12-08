#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main(){
  int gd=DETECT,gm, p0,r,pk,h,k;
   initgraph(&gd,&gm,"");
   cout<<"Enter the center of window \n";
   cin>>h>>k;
   cout<<"Enter the radius of circle \n";
   cin>>r;
   int x=0;
   int y=r;
   pk=1-r;
      
   initwindow(1350,700);

   while(x<=y)
   {
   		putpixel(x+h,y+k,7);
		putpixel(h-x,k-y,7);
		putpixel(h-x,k+y,7);
	   	putpixel(h+x,k-y,7);
	   	
	    putpixel(y+k,x+h,7);
		putpixel(k-y,h-x,7);
		putpixel(k+y,h-x,7);
	   	putpixel(k-y,h+x,7);
	   	
   	if(pk<0)
   	{
   		x=x+1;
   		pk=pk+2*x+1;	
	   }
	   else
	   {
	   	x=x+1;
	   	y=y-1;
	   	pk=pk+2*x-2*y+1;
	   }

   }
   	   	line(h-r,k,h+r,k);
		line(h,k-r,h,k+r);
		line(h-r,k,h+r,k);
		line(h+r,k+r,h-r,k-r);




		

   	   	

   getch();
   return 0;
}

