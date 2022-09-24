#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<string.h>
#define getch() _getch()

int main()
{
    int sw=600,sh=600;
    initwindow(sw,sh);

    //plotting origin axes

    setcolor(YELLOW);
    line(0,(sh/2),sw,(sh/2));
    line((sw/2),0,(sw/2),sh);

    int x0,y0,x1,y1,x2,y2,tx,ty;

    printf("Enter the value of first point (x0,y0):");
    scanf("%d%d",&x0,&y0);
    printf("Enter the value of first point (x1,y1):");
    scanf("%d%d",&x1,&y1);
    printf("Enter the value of first point (x2,y2):");
    scanf("%d%d",&x2,&y2);
    printf("Enter the value of first point (tx,ty):");
    scanf("%d%d",&tx,&ty);
    //before translation
    setcolor(BLUE);
	line((sw/2)+x0,(sh/2)-y0,(sw/2)+x1,(sh/2)-y1);
	line((sw/2)+x1,(sh/2)-y1,(sw/2)+x2,(sh/2)-y2);
	line((sw/2)+x2,(sh/2)-y2,(sw/2)+x0,(sh/2)-y0);

	x0=x0+tx;
	y0=y0+ty;
	x1=x1+tx;
	y1=y1+ty;
	x2=x2+tx;
	y2=y2+ty;
	//After translation
	setcolor(GREEN);
	line((sw/2)+x0,(sh/2)-y0,(sw/2)+x1,(sh/2)-y1);
	line((sw/2)+x1,(sh/2)-y1,(sw/2)+x2,(sh/2)-y2);
	line((sw/2)+x2,(sh/2)-y2,(sw/2)+x0,(sh/2)-y0);

    _getch();
    closegraph();
    return 0;

}
