#include<stdio.h>
int main(){ 
 
char months;
printf("enter the months");
scanf("%c" , &months);


switch(months){
    case 'j':
    printf("janubeary");
    break;

    case 'f':
    printf("february");
    break;
    
    case 'm':
    printf("march");
    break;

    case 'a':
    printf("april");
    break;
     
    case 'M':
    printf("may");
    break;

    case 'J':
    printf("june");
    break;

    case 'l':
    printf("july");
    break;


    case 'A':
    printf("august");
    break;


    case 'S':
    printf("sepetember");
    break;

    case 'o':
    printf("october");
    break;

    case 'n':
    printf("november");
    break;

    case 'd':
    printf("december");
    break;

default:
printf("invalid months");
break;
}


 return 0;
}