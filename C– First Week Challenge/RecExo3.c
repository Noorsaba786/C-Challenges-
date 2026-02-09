#include <stdio.h>

int Fibo(int U0, int U1, int n)
{
    if (n == 0)
    {
        return U0;
    }
    if (n == 1)
    {
        return U1;
    }
    else
    {
        return Fibo(U0, U1, n - 1) + Fibo(U0, U1, n - 2);
    }
}

int main()
{

    int result;
    result = Fibo(4, 8, 6);
    printf("the result is %d", result);
    return 0;
}