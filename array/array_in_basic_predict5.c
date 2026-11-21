#include<stdio.h>
#include<limits.h>
int main()
{
    //find the maxumum value out of all the elements in the arry;
    int arr[7]={1,2,5,8,13,5,6};
    int max=INT_MIN;
    for(int i=0;i<7; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}