// declarer un tableau d'entiers de taille N= 10
#include <stdio.h>

int main()
{
    int T[10];
    int *p;
    p = &T[0];

    for (int i = 0; i < 10; i++)
    {
        T[i] = i;
    }

    for (int i = 0; i < 10; i++)
    {

        printf("the %d value is %d \n", i, *(p + i));
    }
}
