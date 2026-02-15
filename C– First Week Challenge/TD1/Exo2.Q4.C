#include <stdio.h>

void affiche(int tab[])
{
    int *p;
    p = &tab[0];

    printf("the values are %d \n", *p + 3);
    printf("the values are %d \n", *(p + 3));
}

int main()
{
    int mytab[] = {7, 12, 21, 33, 49, 57, 62, 77, 80, 99};
    affiche(mytab);
}