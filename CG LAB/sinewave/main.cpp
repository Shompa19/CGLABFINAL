#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#define getch() _getch()


int main()
{
    int gd=DETECT,gm;
    int angle=0;
    double x,y;
    initgraph(&gd,&gm,(char *)"");
    setcolor(GREEN);
    line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
    for(x=0;x<getmaxx();x+=2)
    {
        y=50*sin((angle*3.1416)/180);
        y=getmaxy()/2-y;
        putpixel(x,y,WHITE);
        //circle(x,y,10);

        delay(100);
        angle+=4;
        //cleardevice();
    }

    _getch();
    closegraph();
    return 0;
}
