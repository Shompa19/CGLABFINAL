#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    int x,y,xc,yc,p,r;
    printf("Enter the origin:\n");
    scanf("%d%d",&xc,&yc);
    printf("Enter the radius:\n");
    scanf("%d",&r);
    initgraph(&gd,&gm,(char*)"");

    p=1-r;
    x=0;
    y=r;
    while(x<=y)
    {
        putpixel(x+xc,y+yc,WHITE);
        putpixel(x+xc,-y+yc,WHITE);
        putpixel(-x+xc,-y+yc,WHITE);
        putpixel(-x+xc,y+yc,WHITE);
        putpixel(y+xc,x+yc,WHITE);
        putpixel(y+xc,-x+yc,WHITE);
        putpixel(-y+xc,-x+yc,WHITE);
        putpixel(-y+xc,x+yc,WHITE);

        if(p<0)
        {
            x+=1;
            p+=2*x+3;
        }
        else{
            x+=1;
            y-=1;
            p+=2*(x-y)+5;
        }
    }
    getch();
    closegraph();
    return 0;
}

