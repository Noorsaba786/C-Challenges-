#include <stdio.h>
#include <stdlib.h>

int *alloue(int N) // fonction qui alloue dynamiquement un tableau de N entiers
{
    int *p; // pointeur vers int

    p = (int *)malloc(N * sizeof(int)); // allocation dynamique de N entiers

    if (p == NULL) // verification de l'allocation
    {
        printf("Erreur d'allocation mémoire\n"); // message d'erreur
        return NULL;
    }

    return p;
}
