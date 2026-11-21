#include<stdio.h>

/*Take positive integer intput and 
tell if it is divisible by 5 and 3*/

int main(){

    int n;
     printf("Enter number");
     scanf("%d",&n);

     if(n%5==0){
        if(n%3==0){
            printf("the number is divisible by 5 and 3");
        }
        else{
            printf("the number is not  divisible by 5 and 3");
        }
     }
     else{
        printf("the number is not divisible by 5and 3");
     }
     
    }   














































