#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#define getch() _getch()
int main()
{
    initwindow(800,800);
    setbkcolor(RED);
    settextstyle(3,6,10);
    outtextxy(400,400,"LOVE");
    _getch();
    closegraph();
    return 0;
}
