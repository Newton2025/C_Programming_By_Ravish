#include <stdio.h>
void main()
{
    int num;
    printf("Enter a Number \n");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("%d is Negative Number \n", num);
    }
    else
    {
        printf("%d is Postive Number \n", num);
    }
}