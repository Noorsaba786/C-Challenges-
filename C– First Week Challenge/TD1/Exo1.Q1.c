// Ecrire une fonction "SommeImpair"qui fait la somme des termes impairs compris entre deux entiers fournis en paramètre.
#include <stdio.h>

/*
int sommeImpair(int a, int b)
{
    int sum = 0;

    for (int i = a; i < b; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    printf("%d\n", sommeImpair(2, 10));
}


*/

int sommeImpair(int a, int b)
{
    int result = 0;
    int *p;
    p = &result;

    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
        {

            *p += i;
        }
    }
    return result;
}

int main()
{
    printf("somme impair %d\n", sommeImpair(2, 7));
}