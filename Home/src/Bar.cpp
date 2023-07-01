#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gm, gd = DETECT;

    char path[] = "C:\\MinGW\\lib\\libbgi.a";

    initgraph(&gd, &gm, path);
    line(90, 110, 100, 100);
    line(100, 100, 110, 110);
    line(100, 100, 100, 350);
    outtextxy(100, 80, "Y");
    line(350, 350, 340, 340);
    line(350, 350, 340, 360);
    outtextxy(360, 350, "X");
    line(100, 350, 350, 350);
    setfillstyle(1, 2);
    bar(120, 224, 150, 350);
    outtextxy(125, 300, "42");
    outtextxy(120, 355, "2075");
    setfillstyle(4, 4);
    bar(160, 215, 190, 350);
    outtextxy(165, 300, "45");
    outtextxy(160, 355, "2076");
    setfillstyle(5, 5);
    bar(200, 209, 230, 350);
    outtextxy(205, 300, "47");
    outtextxy(200, 355, "2077");
    setfillstyle(5, 6);
    bar(240, 218, 270, 350);
    outtextxy(245, 300, "44");
    outtextxy(240, 355, "2078");
    setfillstyle(6, 7);
    bar(280, 206, 310, 350);
    outtextxy(285, 300, "48");
    outtextxy(280, 355, "2079");
    line(100, 350, 135, 224);
    line(135, 224, 175, 215);
    line(175, 215, 215, 209);
    line(215, 209, 255, 218);
    line(255, 218, 295, 206);
    settextstyle(1, 1, 1);
    outtextxy(75, 120, "No of students->");
    settextstyle(1, 0, 1);
    outtextxy(110, 370, "Years->");
    getch();
    closegraph();
    return 0;
}