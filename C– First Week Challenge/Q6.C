#include <stdio.h>
#include <stdlib.h>

int *alloue(int N)
{
    int *p;

    p = (int *)malloc(N * sizeof(int));

    if (p == NULL)
    {
        printf("Erreur d'allocation mémoire\n");
        return NULL;
    }

    return p;
}
