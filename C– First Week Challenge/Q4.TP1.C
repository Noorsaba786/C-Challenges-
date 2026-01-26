// Ecrivez un program qui demand a l'utilisateur deux valuer entiers realise une division et une affectation dans une variable entier et affiche la veur de cette dernier a  l'ecran .

#include <stdio.h>

int main()
{
    int a;
    int b;
    float result;

    printf("saiser une valuer pour a :  \n ");
    scanf("%d", &a);

    printf("saiser une valuer pour b :  \n ");
    scanf("%d", &b);

    if (b == 0)
    {
        printf("Erreur : division par zero \n ");
        return 1;
    }

    result = (float)a / b;

    printf("the divisio is  %f", result);
}
