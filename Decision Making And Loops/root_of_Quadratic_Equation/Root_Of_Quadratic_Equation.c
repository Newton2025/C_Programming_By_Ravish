#include <stdio.h>
void main()
{
    quadratic_Equation();
}
void quadratic_Equation()
{
    int x1, x2, a, b, c;
    printf("Enter a = ");
    scanf("%d", &a);

    printf("Enter b = ");
    scanf("%d", &b);

    printf("Enter c = ");
    scanf("%d", &c);

    // this is a update in the application

    x1 = (-b) + (b * b - 4 * a * c);
    x2 = (-b) - (b * b - 4 * a * c);

    printf("Roots of Equation Are x1 = %  \n  x2 = %d \n", x1, x2);
}