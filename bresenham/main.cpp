#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
    int x,y,x1,x2,y1,y2,p,i,dx,dy;
    int gd=DETECT,gm;
    printf("Inter first point:\n");
    scanf("%d%d",&x1,&y1);
    printf("Inter end point:\n");
    scanf("%d%d",&x2,&y2);
    initgraph(&gd,&gm,(char*)"");
    dx=x2-x1;
    dy=y2-y1;
    p=2*dy-dx;
    x=x1;
    y=y1;
    i=0;
    while(i<=dx)
    {
        putpixel(x,y,WHITE);
        delay(100);
        if(p<0)
        {
            x++;
            p+=2*dy;
        }
        else{
            x++;
            y++;
            p+=2*dy-2*dx;
        }
        i++;
    }
    getch();
    closegraph();
    return 0;
}
