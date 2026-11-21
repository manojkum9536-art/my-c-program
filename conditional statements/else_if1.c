#include <stdio.h>
/* Take input percentage of a student and print  the grade
according to marks:
1) 90-100(Excellent)
2) 80-90(very good)
3) 70-80(good)
4) 60-70(cand do better)
5) 50-60(average)
6) 40-50(below average)
7) <40(fail)
*/
int main()
{
    int n;
    printf("Enter the percentage:");
    scanf("%d", &n);

    if (n > 90)
    {
        printf("A+ grade\n");
    }

    else if (n > 80)
    {
        printf("A grade\n");
    }
    else if (n > 60)
    {
        printf("B grade\n");
    }
    else if (n > 40)
    {
        printf("C grade\n");
    }
    else if (n == 40)
    {
        printf("D grade\n");
    }
    else
    {
        printf("fail\n");
    }
}
