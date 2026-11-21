#include <stdio.h>

/*take 3 number input and tell if they can be the sides of triangle*/

int main()
{

    int a, b, c;
    printf("Enter 1st side:");
    scanf("%d", &a);

    printf("Enter 2nd side:");
    scanf("%d", &b);

    printf("Enter 3rd side:");
    scanf("%d", &c);

    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        printf("valid triangle");
    }
    else
    {
        printf("IN valid triangle");
    }
}