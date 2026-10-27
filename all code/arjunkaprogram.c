#include<stdio.h>
int main()
{
   int age;
   printf("enter age");
 scanf("%d", &age);
 
 if(age>=18 && age<=100){
    printf("adulat");
 }else if(age>13 && age<18){
    printf("taneger");
 } else if(age<=13 && age>=1){
    printf("child");
 }else 
 {
    printf("not valid age in human ");
 }
 return 0;
}