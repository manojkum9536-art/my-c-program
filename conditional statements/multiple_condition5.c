int main()
{

    int a, b, c;
    printf("Enter the  age of ram  :");
    scanf("%d", &a);

    printf("Enter the  age of shyam :");
    scanf("%d", &b);

    printf("Enter the age of ajay:");
    scanf("%d", &c);

    if (a < b && a < c)
    {
        printf("%d is youngest ", a);
    }

    if (b > a && b > c)
    {
        printf("%d is youngest", b);
    }

    if (c > a && c > b)
    {
        printf("%d is youngest", c);
    }
}