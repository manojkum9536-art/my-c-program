#include<stdio.h>
 
// will the addrus out be sum?
// call by value

void printAddrus(int n);
int main(){
    int n = 4;

    printf("%u\n", &n);
    printAddrus(n);
    
    return 0;
}
void printAddrus(int n){
    printf("%u\n", &n);
}