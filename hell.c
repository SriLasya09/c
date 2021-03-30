#include <stdio.h>
int main()
{
  double num1, num2, sum;
   printf("Enter first number: ");
   scanf("%lf", &num1);
   printf("Enter second number: ");
   scanf("%lf", &num2);
   sum = num1 + num2;
   printf("Sum of the entered numbers: %lf", sum);
   return 0;
}