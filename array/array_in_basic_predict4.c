#include<stdio.h>
int main()
{

// calculate the sum of all the elements i the given array.

int arr[5]= {1,2,3,4,20};
int sum = 0;

for(int i=0;i<5; i++){
    sum= sum+arr[i];

}
printf("%d",sum);



    return 0;
}