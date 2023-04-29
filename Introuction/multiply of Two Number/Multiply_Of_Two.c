#include <stdio.h>
void main()
{
    //Declaring The Variables 
    float num1, num2, multiply;
    //Taking Two Numbers from User
    printf("Enter Two Number For Multiply\n");
    //Storing The Numbers in Variables num1 and num2 respectively.
    scanf("%f%f", &num1, &num2);
    //multiplying The Numbers  Stored in num1 and num2 And Storing it in Variable multiply.
    multiply = num1 * num2;
    //Printing The Multiplication Of Two Numbers
    printf("The Multiplication of %f * %f is %f\n",num1,num2,multiply);
}