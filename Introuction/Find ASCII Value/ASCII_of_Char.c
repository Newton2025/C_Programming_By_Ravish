#include <stdio.h>
void main()
{
    //Declaring a Variables
    char ch;
    int ch_value;
    //Taking An Single Character From User.
    printf("Enter A Character\n");
    //Storing the Entered Character is Variable ch.
    scanf("%c", &ch);
    //Converting Character Value to ASCII Interger Value.
    ch_value = ch;
    //Printing ASCII Value Of Given Character.
    printf("The ASCII Value of Character %c is %d\n", ch, ch_value);
}