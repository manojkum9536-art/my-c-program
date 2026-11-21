#include <stdio.h>

/*if cost price and selling price of an item is input through the keyboard ,write a
program to determine whether the seller has made profit of incurred loss . Also
determine how much profit he made or loss he incurred.*/

int main()
{

    int cp;
    printf("Enter cost price:");
    scanf("%d", &cp);

    int sp;
    printf("Enter selling price:");
    scanf("%d", &sp);

    if (sp > cp)
    {
        printf("profit");
    }

    if (cp > sp)
    {
        printf("loss");
    }

    if (sp == cp)
    {
        printf("No profit No loss");
    }
}
