#include <stdio.h>
void main()
{
    int conti = 1;
    while (conti)
    {
        int year;
        printf("Enter a Year to Check Leap or Not \n");
        scanf("%d", &year);

        if (year % 4 == 0)
        {
            printf("%d is Leap Year \n", year);
        }
        else
        {
            printf("%d is Not a Leap Year \n", year);
        }
        printf("Want to Exit Enter - 0 And if Want to Continue Enter - 1 \n");
        scanf("%d", &conti);
    }
}