#include<stdio.h>

//Take positive integer input and tell if it is divisible by 5 or 3

int main(){

int n;
printf("enter the number :");
scanf("%d",&n);
if(n%5==0 || n%3==0){
    printf("the number is divisible by 5 or 3");
}

else{
     printf("the number is not  divisible by 5 or 3");
}






}