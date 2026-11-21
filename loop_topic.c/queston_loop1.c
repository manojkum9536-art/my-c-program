#include<stdio.h>
int main(){

    //wap to count didits of a given number;
    int n,count=0;
    printf("Enter the number:");
    scanf("%d",&n);

    while(n!=0){
        n=n/10;
        count++;
    }
printf("The no of digits are %d",count);



}