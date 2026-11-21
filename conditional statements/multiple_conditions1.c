#include<stdio.h>

/*take positive integer input and tell if 
it is a three digit number or not */

int main(){

    int n;
    printf("enter the number ");
    scanf("%d", &n);

    if(n>99 && n<1000){
        printf("it is a three digit number");
    }
 
    else{
        printf("it  is  not a three digit number");
    }



}