#include <stdio.h>
int main()
{

    int n;
    printf("Enter the line :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        
        for (int j = 1; j <= n - i; j++) //spaces ke liye ek loop
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) // number triangle 
        {
            printf("%d ", j);
        }
        int a = i - 1;
        for (int k = 1; k <= i - 1; k++)
        {
            printf("%d ", a);
            a--;
        }
        printf("\n");
    }
}