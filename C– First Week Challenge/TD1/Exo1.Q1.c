// Ecrire une fonction "SommeImpair"qui fait la somme des termes impairs compris entre deux entiers fournis en paramètre.
#include <stdio.h>

int SommeImpair(int a, int b)
{
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
        {             // Vérifie si le nombre est impair
            sum += i; // Ajoute le nombre impair à la somme
        }
    }
    return sum;
}
