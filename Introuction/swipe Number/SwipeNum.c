#include <stdio.h>
void main()
{
    int num1, num2,temp=0;
    printf("Enter Two Number\n Num1 = ");
    scanf("%d", &num1);
    temp = num1;
    printf("Num2 =  ");
    scanf("%d",&num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("So now Num1 = %d And Num2 = %d\n", num1, num2);
}