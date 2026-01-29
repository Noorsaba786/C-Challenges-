// ecrrie une fonciton moyenne (...) qui prend en entree  trois valuer entier et qui routourne une valuer flottante correspondant a la moyenne des trois valuer . ecrivez un programme principale qui demande a l'utilisateur de saisir trois valuer entiere , appelle la fonction moyenne et affiche le resultat a l'ecran
#include <stdio.h>

void moyenne()
{
    int a, b, c;
    float result;

    printf("Enter three integer values: \n");
    scanf("%d %d %d", &a, &b, &c);

    result = (a + b + c) / 3.0;

    printf("The average is: %.2f\n", result);
}

int main()
{
    moyenne();
    return 0;
}
