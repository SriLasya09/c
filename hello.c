#include<stdio.h>
void main ()
{
   int a,b,sum,diff;
   printf("Enter a number : ");
   scanf("%d" ,&a);
   printf("Enter another number : ");
   scanf("%d",&b);
   sum=a+b;
   printf("the sum is %d ",sum);
   diff=a-b;
   printf(" the difference is %d",diff);
}