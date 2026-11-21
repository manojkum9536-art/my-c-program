#include<stdio.h>

//cell by reference


void printAddrus(int *n);
int main(){
    int n = 4;
 printAddrus(&n);
    printf("%u\n", &n);
  
    
    return 0;
}
void printAddrus(int *n){
    printf("%u\n", n);
}