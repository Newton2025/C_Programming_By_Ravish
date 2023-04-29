#include <stdio.h>
void main()
{
    while (1)
        oddEven();
}
oddEven()
{
    char ch;
    printf("Enter a Character =  ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("%c is Vowel\n", ch);
        }
        else
        {
            printf("%c is Consonant\n", ch);
        }
    }
    else
    {
        printf("Enter a Charcter Not a Number\n");
    }
}