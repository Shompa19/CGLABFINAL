#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int gd=DETECT,gm;
    int x1,x2,y1,y2,i,step,xn,yn,dx,dy;

    initgraph(&gd,&gm,(char*)"");
    printf("Enter first coordinates:\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter end coordinates:\n");
    scanf("%d%d",&x2,&y2);
    dx=x2-x1;
    dy=y2-y1;
    if(abs(dx)>abs(dy))
    {

        step=dx;
    }
    else
    {

        step=dy;
    }
    xn=dx/step;
    yn=dy/step;
    for(i=1;i<=step;i++)
    {

        putpixel(x1,y1,LIGHTBLUE);
        delay(100);
        x1+=xn;
        y1+=yn;
    }
    getch();
    closegraph();
    return 0;
}

