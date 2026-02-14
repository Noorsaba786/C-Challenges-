#include <stdio.h>
#include <stdlib.h>

// Ecrire maintenant deux fonctions "saisi" et "affiche" qui respectivement permettent la saisie de trois entiers et leur affichage.

int saisi(int *a, int *b, int *c)
{
    printf("enter a \n");
    scanf("%d", a);

    printf("enter b \n");
    scanf("%d", b);
    printf("enter c \n");
    scanf("%d", c);
}

int affiche(int *a, int *b, int *c)
{ // values
    printf("Values \n");
    printf("the value of a is  %d \n", *a);
    printf("the value of b is  %d \n", *b);
    printf("the value of c is  %d \n \n", *c);

    printf("Adress \n ");
    printf("the address of a is  %d \n", a);
    printf("the adress of b is  %d \n", b);
    printf("the adress of c is  %d \n", c);
}

int main()
{
    int x, y, z;
    saisi(&x, &y, &z);
    affiche(&x, &y, &z);
}