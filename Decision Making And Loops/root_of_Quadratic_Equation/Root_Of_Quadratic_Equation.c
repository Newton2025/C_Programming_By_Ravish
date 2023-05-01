#include <stdio.h>
void main()
{
    int a, b, c;

    printf("Enter a = ");
    scanf("%d", &a);

    printf("Enter b = ");
    scanf("%d", &b);

    printf("Enter c = ");
    scanf("%d", &c);

    quadratic_Equation(a, b, c);
}

void quadratic_Equation(int a, int b, int c)
{
    int x1, x2, discriminant;

    discriminant = b * b - 4 * a * c;

    x1 = (-b) + sqrt(discriminant);
    x2 = (-b) - sqrt(discriminant);

    printf("Roots of Equation Are x1 = %d  \n  x2 = %d \n", x1, x2);
}