#include <iostream>
#include <graphics.h>
#include <conio.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;

    int x0, y0, p, x1, y1, dy, dx, x, y;
    float m;
    cout << "Enter the starting position \n";
    cin >> x0 >> y0;
    cout << "Enter the ending position \n";
    cin >> x1 >> y1;
    dx = x1 - x0;
    dy = y1 - y0;
    x = x0;
    y = y0;
    p = 2 * dy - dx;
    while (x < x1)
    {
        if (p >= 0)
        {
            putpixel(x, y, 7);
            y = y + 1;
            x = x + 1;
            p = p + 2 * dy - 2 * dx;
        }
        else
        {
            putpixel(x, y, 7);
            p = p + 2 * dy;
        }
        x = x + 1;
    }

    getch();
    return 0;
}