#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    char c;
    printf("Enter 1st number");
    scanf("%d ", &a);
    printf("Enter 2nd number");
    scanf("%d", &b);
    printf("Enter any operator");
    scanf("%c", &c);
    switch (c)
    {
    case '+':
        printf(" sum is %d", a + b);
        break;
    case '-':
        printf(" diff is %d", a - b);
        break;
    case '*':
        printf(" multi is %d", a * b);
        break;
    case '/':
        printf(" div is %d", a / b);
        break;
    default:
        printf("invalid");
        break;
    }
    getch();
}