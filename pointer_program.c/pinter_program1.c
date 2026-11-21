
#include<stdio.h>

//call by value 
void square(int n);

int main(){
    int number ;
    printf("enter the number:");
    scanf("%d", &number);
    square(number);
    printf("number =%d\n", number);
     
    return 0;
}
//call by value

void square(int n){
    n = n*n;
    printf("square = %d\n", n);
}


