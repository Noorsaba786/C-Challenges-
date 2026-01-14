// ####################### TD1 #########################
//  Exercice 1 : Fonctions et paramètres de type pointeur

// Q1: Ecrire une fonction SommeImparie qui fait la somme des termes impairs compris entre deux entiers fournis en parametre.

#include <stdio.h>
int SommeImpaire(int a, int b)
{
    int somme = 0;
    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
        {
            somme += i;
        }
    }
    return somme;
    // ex: SommeImpaire (3,9) = 3 + 5 + 7 + 9 = 24
    printf("La somme des entiers impairs entre %d et %d est : %d\n", a, b, somme);
}