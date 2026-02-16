#include <stdio.h>

typedef int tab100[100];

int sommeRec(tab100 T, int i)
{

    if (i = 100)
    {
        return 0;
    }

    return T[i] + sommeRec(T, i + 1);
}

int main()
{
    tab100 T;
    for (int i = 0; i < 100; i++)
    {
        T[i] = i + 1;
    }

    printf("the sum of the values is %d ", sommeRec(T, 0));
    return 0;
}