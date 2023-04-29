#include <stdio.h>
void main()
{
    int num1, num2;
    printf("Enter num1 =  ");
    scanf("%d", &num1);

    printf("Enter num2 =  ");
    scanf("%d", &num2);

    num1 > num2 ? printf("%d number is Largest\n", num1) : printf("%d number is Largest\n", num2);
}