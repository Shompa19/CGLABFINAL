#include<stdio.h>
#include<graphics.h>
#include<string.h>
#include<conio.h>
#define getch() _getch();

int main()
{

    initwindow(1000,500);
    int i;
    for(i=0;i<1000;i++)
    {
        setcolor(GREEN);
        circle(100+i,250,50);
        setfillstyle(SOLID_FILL,RED);
        floodfill(100+i,250,GREEN);
        delay(50);
        cleardevice();
    }
    _getch();
    closegraph();
    return 0;
}
