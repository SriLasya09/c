#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, r;
    char ch;
    printf("Enter 1st number : ");
    scanf("%d ", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("Enter any operator ");
    scanf("%c", &ch);
    switch (ch)
    {
    case '+':
        r = a + b;
        break;
    case '-':
        r = a - b;
        break;
    case '*':
        r = a * b;
        break;
    case '/':
        r = a / b;
        break;
    }
    printf("result = %d", r);
}