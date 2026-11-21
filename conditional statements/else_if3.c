#include <stdio.h>
/*given a point(x,y) write a progra to find out
if ti lies on the x-axis, y-axis or at the origin viz (0,0).*/
int main()
{

    int x, y;
    printf("enter the coordinates:");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("the point is origin");
    }
    else if (x == 0)
    {
        printf("lies on the y-axis");
    }
    else if (y == 0)
    {
        printf("lies on the x-axis");
    }
    else
    {
        printf("the point does nto lie on x or y axis");
    }
}
