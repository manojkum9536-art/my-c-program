#include<stdio.h>
int main(){

//wap to print sum of  digits of a given number.

int n;
printf("Enter the number:");
scanf("%d",&n);
int sum =0;
int liastdigit=0;
while(n!=0){
    liastdigit=n%10;
    sum = sum + liastdigit;
    n=n/10;
}
printf("The sum of digits are: %d",sum);




}