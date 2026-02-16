#include <stdio.h>
typedef int tab100[100];

int affiche2(tab100 T)
{

    int *p;
    p = T;
    for (int i = 0; i < 100; i++)
    {
        printf("The value is  %d \n", *(p + i));
    }
}

int main()
{
    tab100 T;
    for (int i = 0; i < 100; i++)
    {
        T[i] = i;
    }

    affiche2(T);
    return 0;
}
