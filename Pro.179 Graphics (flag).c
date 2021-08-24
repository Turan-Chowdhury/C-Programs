/*
    setfillstyle(1,fill_color);
                                  1 means (normal filling)

    floodfill(px,py,border_color);
                                    (px,py) is Any point inside rectangle/circle.
*/

#include<graphics.h>
#include<conio.h>
int main()
{
    int driver,mode;
    driver=DETECT;
    mode=0;

    initgraph(&driver,&mode,"c:\\tc\\bgi");

    setcolor(GREEN);
    rectangle(100,80,500,320);
    setfillstyle(1,GREEN);
    floodfill(120,100,GREEN);

    setcolor(RED);
    circle(280,200,80);
    setfillstyle(1,RED);
    floodfill(280,200,RED);

    getch();
    closegraph();
    return 0;
}

