// Ecrire un programme qui permute 2 valeurs sans utilisation de la variable tmp

#include <stdio.h>
int main()
{
    int a = 5;
    int b = 10;

    printf("Avant permutation: a = %d, b = %d\n", a, b);

    a = a + b; // a devient 15
    b = a - b; // b devient 5
    a = a - b; // a devient 10
    printf("Après permutation: a = %d, b = %d\n", a, b);
    return 0;
}