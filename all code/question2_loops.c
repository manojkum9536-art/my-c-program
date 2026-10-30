#include<stdio.h>
int main(){
//print the  table of a number intput by the usee n;
int n;
printf("enter the number :");
scanf("%d", &n);
for(int i = 1; i<=10; i++){
    printf("%d\n", n*i);
}




    return 0;
}