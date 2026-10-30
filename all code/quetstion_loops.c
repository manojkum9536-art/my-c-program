#include<stdio.h>
int main(){
//print the sum of first n natural nummber n;
int n;  
printf("etner the number ");
scanf("%d", &n);
int sum =0; 
for(int i=1; i<=n; i++){
    sum = sum +i;
}printf("sum is : %d" ,sum);




    return 0;
}