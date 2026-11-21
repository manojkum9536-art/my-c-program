#include<stdio.h>

//write a function to calculate percentage of a student from in science, mathe, &sanskrit.


int calculatePrecentage(int science, int math, int sanskrit);

int main(){
    int sc= 100;
    int math = 189;
    int sanskrit =200;
    printf("prcentage is : %d",calculatePrecentage(sc, math , sanskrit));
    return 0;
}
int calculatePrecentage(int science, int math, int sanskrit ){
    return ((science + math + sanskrit )/6);
}