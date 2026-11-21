#include <stdio.h>

// display this gp - 3,12,48,...upto 'n' terms;
int main()
{

    int n;
    printf("enter the number:");
    scanf("%d", &n);

    int a = 3;

    for (int i = 3; i <= n; i++)
    {
        printf("%d ", a);

        a = a * 4;
    }

    return 0;
}