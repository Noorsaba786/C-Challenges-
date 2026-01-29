// ecrie une fonciton qui prend en parametre les trois coefficients reels d'un polynome du second degre (a,b,c) et qui calcule le discriminant . la fonction doit retourner la valeur du discriminant au programme principale qui l'affiche a l'ecran

#include <stdio.h>

int polynome(int a, int b, int c)
{
    int delta = (b * b) - (4 * (a * c));
    printf("the result is  : %d", delta);
    return delta;
}

int main()
{
    int num1;
    int num2;
    int num3;
    int result;
    printf("Enter 3 coefficents for a  , b , and c ");
    scanf("%d %d %d", &num1, &num2, &num3);

    result = polynome(num1, num2, num3);
    printf("the discriminant is : %d", result);
    return 0;
}