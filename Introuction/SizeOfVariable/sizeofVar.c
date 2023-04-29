#include <stdio.h>
void main()
{
    int Inttype;
    char Chartype;
    float Floattype;
    double Doubletype;
    printf("Enter a Integer To Find its Size\n");
    scanf("%d",&Inttype);
    printf("The Size of %d Is %d\n", Inttype, sizeof(Inttype));

    printf("Enter a Character To Find its Size\n");
    scanf("%c",&Chartype);
    printf("The Size of %c Is %d\n", Chartype, sizeof(Chartype));

    printf("Enter a Float To Find its Size\n");
    scanf("%f",&Floattype);
    printf("The Size of %f Is %f\n", Floattype, sizeof(Floattype));

    printf("Enter a Decimal To Find its Size\n");
    scanf("%d",&Doubletype);
    printf("The Size of %fl Is %fl\n", Doubletype, sizeof(Doubletype));
}