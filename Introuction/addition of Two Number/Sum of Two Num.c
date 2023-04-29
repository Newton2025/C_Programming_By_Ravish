#include <stdio.h>
void main()
{
    //Declaring Variables
    int num1, num2, sum=0;
    //Taking Two Number From User For Addition
    printf("Enter Two Number For Addition\n");
    //Storing The Entered values by User in Variables num1 and num2 Respectively.
    scanf("%d%d", &num1,&num2);
    //Adding The Two Number And Storing it in Variable sum
    sum = num1 + num2;
    //printing the Sum of it.
    printf("The Sum of %d + %d is %d \n",num1,num2,sum);
}