#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    char ch;
    printf("Enter 2 numbers : ");
    scanf("%d %d", &a, &b);
    printf("Enter any operator ");
    scanf("%s", &ch);
    printf("%d %d",a,b);
    printf("%c",ch);
    // switch (ch)
    // {
    // case '+':
    //     printf(" sum is %d", a + b);
    //     break;
    // case '-':
    //     printf(" diff is %d", a - b);
    //     break;
    // case '*':
    //     printf(" multi is %d", a * b);
    //     break;
    // case '/':
    //     printf(" div is %d", a / b);
    //     break;
    // default:
    //     printf("invalid");
    // }
}