/*
Q1. Ecrivez un nouveau programme (nouveau fichier) qui remplit un tableau de 200 cases de
valeurs entières aléatoires entre 10 et 99. A l'aide d'une boucle for, parcourez toutes les
cases, et testez si la case i est inférieure à la suivante i+1. Si ce n'est pas le cas, inversez
les deux cases. A la fin, affichez le tableau, vous verrez qu'il n'est pas trié.
• Quelle est la nouvelle organisation que nous avons donnée au tableau ?
• Quelle est la seule chose certaine que nous pouvons dire ?
• Quelle est la complexité de ce traitement ?
Q2. Modifiez le programme pour répéter ce traitement plusieurs fois, de manière à trier le
tableau (combien de répétition faut-il au minimum pour assurer le tri ?). Vous venez de
programmer le tri à bulles (voyez avec votre enseignant de TP pour qu'il vous explique les
détails du tri). Assurez-vous avec un affichage que votre programme trie bien le tableau
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int myarr[200];
    srand(time(NULL));
    printf("\n ici je veux imprimer les valuer entrer 10 et 99 avant le permutation \n");

    for (int i = 0; i < 200; i++)
    {
        myarr[i] = rand() % 90 + 10; // ou on peut eaglmemt ecrire 99-10+1

        printf(" %2d ", myarr[i]);
    }
    printf("\n  \napres la permutation \n");

    for (int pass = 0; pass < 200; pass++) // pour repeter le traitement plusieurs fois

    {
        for (int i = 0; i < 200 - pass - 1; i++) // -1 pour eviter de depasser la taille du tableau
        {
            if (myarr[i] > myarr[i + 1])
            {
                int tmp = myarr[i];
                myarr[i] = myarr[i + 1];
                myarr[i + 1] = tmp;
            }
        }
    }

    printf("\n\nApres la permutation (un seul passage):\n");
    for (int i = 0; i < 200; i++)
    {
        printf(" %2d ", myarr[i]);
    }

    return 0;
}