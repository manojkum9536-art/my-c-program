#include<stdio.h>

/*given an array of marks of students(10), if the mark of any students is less
os lell tan 35 printf ist roll numbers [roll number here refers 
to the index of the array.] */

int main()
{
int marks[10];
for(int i=0; i<10; i++){
printf("Enter th number %d\n", i+1);
scanf("%d", &marks[i]);
}
for(int i=0; i<10; i++){
    if(marks[i]<35){
        printf("%d  ", marks[i]); //index, i;
    }
}



}