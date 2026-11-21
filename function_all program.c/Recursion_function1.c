#include<stdio.h>

void printHw(int count);

int main(){
    printHw(5);

    }
    void printHw(int count){
        if(count==0){
            return ;
        }
    printf("Hello world\n");
    printHw(count-1);
    }
