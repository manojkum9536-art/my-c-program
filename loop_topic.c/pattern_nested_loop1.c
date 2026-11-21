#include<stdio.h>
int main(){
  
    int i, j, n;
                            /*12345
                              12345
                              12345
                              12345   */
                               
    printf("enter the  number:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    






}