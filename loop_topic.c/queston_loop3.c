#include <stdio.h>
int main()
{

    // wap to pritn reverse of given number;
    int n;
    printf("Enter the number");
    scanf("%d", &n);

    int r = 0;
    while (n > 0)
    {
        r = r * 10;
        
        r = r + (n % 10);

        n = n / 10;
    }
    printf("The reverse number is :%d", r);
    return 0;
}