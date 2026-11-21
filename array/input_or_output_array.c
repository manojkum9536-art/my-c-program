#include<stdio.h>
int main()
{

int a[5];
for(int i=0; i<5; i++){
printf("Enter th number %d\n", i+1);
scanf("%d", &a[i]);
}
for(int i=0; i<5; i++){
    printf("arrey=:{%d} ", a[i]);
}


}