#include<graphics.h>
#include<iostream>
using namespace std;
int main(){
	int a,left, top, right, bottom, depth, topflag;

	cout<<"Which one figure do you want to draw from the given:\n";
	cout<<" 1.Arc \n 2.Pieslice \n 3.Bar \n 4.3d bar \n 5.Rectangle \n 6.Pie-chart\n";
	cin>>a;
	switch(a)
	{
		case 1:
			{
				int gd=DETECT, gm;
			    initgraph(&gd,&gm, " ");
				initwindow(1080,1000);
				arc(300,300,0,180,40);
				getch();
				closegraph;
				break;
			}
		
		case 2:
			{
				int gd=DETECT, gm;
			    initgraph(&gd,&gm, " ");
				initwindow(2000,2000);
				pieslice(300,300,0,180,40);
				getch();
				closegraph;
				break;
			}
			
		case 3:
			{
				int gd=DETECT, gm;
			    initgraph(&gd,&gm, " ");
				initwindow(1080,1000);
				    
    			bar(left = 150, top = 150, right = 190, bottom = 350);
  
    			bar(left = 220, top = 250, right = 260, bottom = 350);
  
    			bar(left = 290, top = 200, right = 330, bottom = 350);
  
    			 // y axis line
    			 line(100, 50, 100, 350);
  	
    			 // x axis line
    			 line(100, 350, 400, 350);
  				 getch();
				 closegraph;
			break;	
			}
			
		case 4:
			
				{
					int gd=DETECT, gm;
			    initgraph(&gd,&gm, " ");
				initwindow(1000,1000);
						bar3d(left = 150, top = 250,
   						 right = 190, bottom = 350,
    						depth = 50, topflag = 1);
  
    						bar3d(left = 220, top = 150,
    						right = 260, bottom = 350,
   							 depth = 20, topflag = 0);
  
    							bar3d(left = 290, top = 200,
    							right = 330, bottom = 350,
    							depth = 20, topflag = 1);
  
    							// y axis line
    							line(100, 50, 100, 350);
  
    							// x axis line
    							line(100, 350, 400, 350);
  
    							getch();
    							closegraph();
							break;
				}
				
			
	}
}
