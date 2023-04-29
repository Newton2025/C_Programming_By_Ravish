#include <stdio.h>
void main()
{
    int num,Divider,Remainder,Quotient;
    printf("Enter A Number And Divider To Check its Remainder And Quotient\n");
    scanf("%d%d",&num,&Divider);
    Remainder = num % Divider;
    Quotient = num / Divider;
    printf("The Remainder of Number %d is %d And Quotient is %d\n", num, Remainder, Quotient);
}