#include<stdio.h>
int main()
{

    int  i,j,k = 1,h,p;
    printf("enter the row");
    scanf("%d", & h);
    
    for(i=1; i<=h;  i++)
    {
        for(j=1; j<=(h-1); j++)
        printf("  ");
    
    
             for(j=1; j<=i; j++)
               printf("%d", k++);
      
      for(j=(i-1); j>=1; j--)
      {
        p = k-2;
        k=k-1;
        printf("%d", p);
    }
printf("\n");
    }

return 0;
}

