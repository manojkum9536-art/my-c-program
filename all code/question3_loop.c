

//keep  taing numbers  aas intput from user  until user enters an odd numbber (do,while loop ka use )
#include<stdio.h>
int main(){
   
 int n;
 
    do {printf("Enter the number :");
    scanf("%d", &n);
     printf("%d\n",n);
     if(n%2 !=0){

        break;
     }
    }while(1);
    printf("odd number break");




}
