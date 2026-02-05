// En guise de second test , écrivez une  fonciton  int fibo ( int U0 , int U1 , int n )qui perment de calculer la valeur Un de la suite de Fibonacci . N'affichz pas les valeurs intermediares , mais trouvezle moyen de verifer que votre fonction prouduit le bon resultat .

#include <stdio.h>
/*
int fibo(int U0, int U1, int n)
{
    if (n == 0)
    {
        return U0;
    }
    else if (n == 1)
    {
        return U1;
    }
    else
    {
        return fibo(U0, U1, n - 1) + fibo(U0, U1, n - 2);
    }
}

*/

int fibo(int U0, int U1, int n)
{
    if (n == 0)
    {
        return U0;
    }
    else if (n == 1)
    {
        return U1;
    }
    else
    {
        return fibo(U0, U1, n - 1) + fibo(U0, U1, n - 2);
    }
}

int main()
{

    int U0 = 0; // Valeur initiale U0
    int U1 = 1; // Valeur iniale U1 ;
    int n = 10; // indice de la valuer de fibo a calculer

    int result = fibo(U0, U1, n);
    printf("la valuer de U %d  dans la suite de Fibonacci est %d ", n, result);
    return 0;
}

/*
int main()
{
    int U0 = 0; // Valeur initiale U0
    int U1 = 1; // Valeur initiale U1
    int n = 10; // Indice de la valeur de Fibonacci à calculer

    int result = fibo(U0, U1, n);
    printf("La valeur de U%d dans la suite de Fibonacci est: %d\n", n, result);

    return 0;
}

*/
