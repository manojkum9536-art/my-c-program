#include<stdio.h>
int main(){
 
int n, j, k=1, p, i;
printf("enter the row");

    scanf("%d", &n);

    for(i= 1; i<=n; i++){
        for(j=1; j<=(n-1); j++)
        printf("  ");
    
        for(j=1; j<=i; j++)
    printf("%d", k++);
    for(j=(i-1);j>=1; j--)
    { 
        p = k-2;
        k = k-1;
        printf("%d", p);

    }
    printf("\n");
            
    }
    return 0;
}