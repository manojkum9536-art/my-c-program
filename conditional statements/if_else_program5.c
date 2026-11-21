#include<stdio.h>
int main(){

/*given the length and breadth of a rectaangle ,
 write a program to find whether the area of
  thr rectangle is greaater than its perimeter.*/
  int l;
  printf("Enter length:");
  scanf("%d",&l);

  int b;
  printf("Enter breadth :");
  scanf("%d",&b);

    int a = l*b;
    int p = 2*(l+b);
    if(a>p){
        printf("Area is greater than perimeter");
    }
    else{
        printf("Area is not greater than perimeter");
    }
}