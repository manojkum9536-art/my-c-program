#include<stdio.h>

//take positive integer input and tell if it is even or odd 
int main(){

int n;
printf("Enter the number:");
scanf("%d", &n);

if(n%2==0){
    printf("Even Number");
}

//if(n%2!=0)
else{
    printf("Odd Number");

}
 
 return 0;
}