#include<stdio.h>

 void nameste();
 void bonjour();
 int main() {
   printf("enter f for french & i for indian:");
   char ch;
   scanf("%c",&ch);

   if(ch == 'i'){
      nameste();
   } else{
      bonjour();
   }

  return 0;
  
 }
 
 void nameste(){
     printf("Nameste\n");
   
 }
 void bonjour(){
   printf("Bonjour\n");
 }