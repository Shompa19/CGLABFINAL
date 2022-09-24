#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<string.h>
#define getch() _getch()

int main()
{
    int r,xc,yc;
    int choice;
    //int gd=DETECT,gm;
    //initgraph(&gd,&gm,(char *)"");
    //Window measurement

    //DWORD sw=GetSystemMetrics(SM_CXSCREEN);
    //DWORD sh=GetSystemMetrics(SM_CYSCREEN);
    int sw=600,sh=600;
    initwindow(sw,sh);

    //plotting origin axes

    setcolor(YELLOW);
    line(0,(sh/2),sw,(sh/2));
    line((sw/2),0,(sw/2),sh);
    printf("Enter the value of center:");
    scanf("%d%d",&xc,&yc);
    printf("Enter the value of radius\n");
    scanf("%d",&r);

    //Before Reflection

    setcolor(BLUE);
    circle((sw/2)+xc,(sh/2)-yc,r);

    printf("Press 1 for X-axis reflection\n");
    printf("Press 2 for Y-axis reflection\n");
    printf("Press 3 for XY-Axis Reflection\n");

    printf("Enter the choice:\n");
    scanf("%d",&choice);

    if(choice==1)
    {
    //X-Axis Reflection

    xc=xc;
    yc=-yc;

    setcolor(GREEN);
    circle((sw/2)+xc,(sh/2)-yc,r);
    }
    else if(choice==2)
    {
        xc=-xc;
        yc=yc;
        setcolor(GREEN);
        circle((sw/2)+xc,(sh/2)-yc,r);
    }
    else if(choice==3)
    {
      xc=-xc;
      yc=-yc;
      setcolor(GREEN);
      circle((sw/2)+xc,(sh/2)-yc,r);
    }
    else
        exit(0);

    _getch();
    closegraph();
    return 0;
}
