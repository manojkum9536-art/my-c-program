#include <stdio.h>
// take 3 positive integers input and print the
// greatest of them.
int main()
{
    int a, b, c;
    printf("Enter the  number  :");
    scanf("%d", &a);

    printf("Enter the  number :");
    scanf("%d", &b);

    printf("Enter the number:");
    scanf("%d", &c);

    if (a > c)
    {
        if (a > b)
            printf("%d is greatest", a);
        else
            printf("%d is greatest", c);
    }
    else
    {
        if (b > c)
            printf("%d is  greatest", b);

        else
            printf("%d is greatest", c);
    }

    return 0;
}
