#include <stdio.h>
void main()
{
    int num;
    printf("Enter a Number =  ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is Even Number\n", num);
    }
    else
    {
        printf("%d is Odd Number\n", num);
    }
}