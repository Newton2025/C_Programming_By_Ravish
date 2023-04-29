/*
Developed by ravish KUmar Tiwari on saturday
*/
#include <stdio.h>

void main()
{
    int num, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);

    remainder = num % 2;

    switch (remainder)
    {
    case 1:
        printf("%d is an even number\n", num);
        break;
    case 2:
        printf("%d is an odd number\n", num);
        break;
    }
}