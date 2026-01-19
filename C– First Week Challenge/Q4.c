// ecrire un programme qui trovue le plus grand et le plus petit  valueur entre 3 valeur donner

#include <stdio.h>

int main()
{
    int a = 3;
    int b = 4;
    int c = 9;

    int largest = a;

    if (b > largest)
    {
        largest = b;
    }
    if (c > largest)
    {
        largest = c;
    }
    printf("Le plus grand nombre est : %d\n", largest);

    int smallest = a;

    if (b < smallest)
    {
        smallest = b;
    }
    if (c < smallest)
    {
        smallest = c;
    }
    printf("Le plus petit nombre est : %d\n", smallest);

    return 0;
}