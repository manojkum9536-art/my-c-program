#include <stdio.h>

// Take 3 positive integers input and print the 
// greatest of then.
int main()
{

    int a, b, c;
    printf("Enter 1st number :");
    scanf("%d", &a);

    printf("Enter 2sec number :");
    scanf("%d", &b);

    printf("Enter 3rd number :");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d is greatest", a);
    }

    if (b > a && b > c)
    {
        printf("%d is greatest", b);
    }

    if (c > a && c > b)
    {
        printf("%d is gratest", c);
    }
}