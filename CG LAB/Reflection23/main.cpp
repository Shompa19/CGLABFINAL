#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<string.h>
#define getch() _getch()

int main()
{
    int gd=DETECT,gm,x1,x2,y1,y2,reflection,y1adjust,y2adjust,x1adjust,x2adjust,choice,ch;
    printf("Enter Northeast corner of rectangle\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter Southeast corner of rectangle\n");
    scanf("%d%d",&x2,&y2);
    printf("....Reflection....\n");
    //initgraph(&gd,&gm,(char *)"");
    initwindow(600,600);

HERE:
    cleardevice();
    line(0,300,600,300);
    line(300,0,300,600);
    rectangle(300+x1,y1,x2+300,y2);
    y1adjust=y1+300+y1;
    y2adjust=y2+300+y2;
    x1adjust=x1+x1;
    x2adjust=x2+x2;
    system("cls");
    printf("Press 1 for X-Axis Reflection\n");
    printf("Press 2 for Y-Axis Reflection\n");
    printf("Press 3 for XY-Axis Reflection\n");
    scanf("%d",&choice);

    switch(choice)
        {
        case 1:
            rectangle(300+x1,-y1+y1adjust,300+x2,-y2+y2adjust);
            break;
        case 2:
            rectangle(-x1+x1adjust,y1,-x2+x2adjust,y2);
            break;
        case 3:
            rectangle(-x1+x1adjust,-y1+y1adjust,-x2+x2adjust,-y2+y2adjust);
            break;
        default:
            printf("Wrong choice\n");
        }

    printf("Press 1 to continue\n");
    scanf("%d",&ch);
    if(ch==1)
    {
        goto HERE;
    }
    else
        exit(0);

    _getch();
    closegraph();
    return 0;
}
