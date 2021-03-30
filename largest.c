#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n, a[50], max;
    printf("Enter any number : ");
    scanf("%d", &n);
    printf("Enter the elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max=a[0];
    for (int j = 1; j < n; j++)
    {
        if (max<a[j])
        {
           max=a[j];
        }  
    }
    printf("Maximum is %d",max);
    
}