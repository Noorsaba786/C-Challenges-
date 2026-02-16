#include <stdio.h>
#include <stdlib.h>

int *alloue2()
{
    int *n;
    n = malloc(100 * sizeof(int));
    return n;
}

int main()
{

    int *tab100;
    alloue2(tab100);
    if (tab100 == NULL)
    {
        printf("Allocation failed ");
    }

    tab100[0] = 45;
    printf(" the value is = %d ", tab100[0]);
    printf(" the address is = %p ", &tab100[0]);

    free(tab100);
}