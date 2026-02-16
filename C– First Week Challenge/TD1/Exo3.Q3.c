#include <stdio.h>
#include <stdlib.h>

void alloue3(int **n)
{

    *n = malloc(100 * sizeof(int));
}

int main()

{
    int *tab100;
    alloue3(&tab100);

    if (tab100 == NULL)
    {
        printf("Allocation failled ");
        return 1;
    }

    tab100[0] = 55;
    printf("the value of the first tabl is %d", tab100[0]);

    free(tab100);
    return 0;
}