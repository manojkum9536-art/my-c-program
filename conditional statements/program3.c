#include<stdio.h>

//take integer input and print the absolute value of that integer.
int main(){

    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    if(n<0){
        n= n*(-1);
    }
    printf("the absolute value is : %d", n);




}