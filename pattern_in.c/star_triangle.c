#include <stdalign.h>
int main()
{

    int n;
    printf("Enter the rowns:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}