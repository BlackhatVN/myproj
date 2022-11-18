\\its vn babe
\\calculator
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int
main(void)
{
     double num1 = 0.0;
     double num2 = 0.0;
     char   opera ;
     double result = 0.0;

     printf("Usage: numa /*+- numb\n");
     while (1)
     {
         result = 0.0;
         printf("please enter: \n");
         scanf ("%lf %c %lf", &num1, &opera, &num2);

         switch(opera)
         {
             case '+':
                 result = num1 + num2;
                 break;

             case '-':
                 result = num1 - num2;
                 break;

             case '*':
                 result = num1 * num2;
                 break;

             case '/':
                 if (num2 == 0)
                 {
                      printf("error: numb = 0!\n");
                 }
                 else
                 {
                      result = num1 / num2;
                 }
                 break;

             default:
            
                 break;
         }//switch()

         printf("=%lf\n", result);
     }//while(1)


     exit(0);
}