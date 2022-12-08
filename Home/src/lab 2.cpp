#include<graphics.h>
#include<iostream>
using namespace std;
int main(){
	int a,left, top, right, bottom, depth, topflag;

	cout<<"Which one figure do you want to draw from the given:\n";
	cout<<" 1.Bar Diagram \n 2.3D Bar \n 3.Baagchal \n";
	cin>>a;
	switch(a)
	{
		case 1:
			{
				int gd=DETECT, gm;
			    initgraph(&gd,&gm, " ");
				initwindow(1080,1000);
				    
    			bar(left = 150, top = 150, right = 190, bottom = 350);
    			
				bar(left = 150, top = 160, right = 190, bottom = 350);
    			
      			bar(left = 150, top = 170, right = 190, bottom = 350);
    			
				bar(left = 220, top = 155, right = 260, bottom = 350);
  
    			bar(left = 290, top = 200, right = 330, bottom = 350);
  
    			 // y axis line
    			 line(100, 50, 100, 350);
  	
    			 // x axis line
    			 line(100, 350, 400, 350);
  				 getch();
				 closegraph;
				break;
			}
		
		case 2:
			{

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
			
		
				}
				
			
	}

