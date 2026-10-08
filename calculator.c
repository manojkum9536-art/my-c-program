#include<stdio.h>

int main() {
    char op;
    double num1, num2, result;

    printf("================================\n");
    printf("================================\n");
    printf("================================\n");
    printf("sclect operator(+,-,*,/,%%):");
    scanf("%c",&op);
     
    printf("enter second number: ");
    scanf("%lf", &num1);

    printf("enter second number: ");
    scanf("%lf", &num2);

       switch (op) {
        case '+':
             result = num1 +num2;
             printf("\nresult: %.2lf  + %.2lf = %.2lf\n",num1,num2 ,result);
               break;
      case '-':
        result = num1 - num2;
        printf("\nresult: %.2lf - %.2lf = %.2lf\n",num1, num2,result);
          break;

        case '*':
        result =num1 * num2;
        printf("\nresult: %.2lf * %.2lf = %.2lf\n ", num1,  num2, result);
        break;

        case '/':
         if (num2 != 0) {
            result = num1 / num2;
            printf("\nresult: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
         }else {
            printf("\nError: Zero (0) se divided nahi kar sakte!\n");
         }
         break;
         case '%':
         if ((int) num2 !=0){
            printf("\nresult: %d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
         }else {
            printf("\nError: Zero (0) se divide nahi kar sakte!\n");
         }
         break;
         default:
         printf("\nError: Galat operator daala hai\n");
       }
       return 0;
    }