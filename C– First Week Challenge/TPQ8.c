// En ecrivant des fucnions recursive , repondrez aux question suivantes .
// Q1 :  Ecrivez une fonction factorielle  int facto (int n ) verifez son fonctionmennet dans un programme complet , avec l'affichage des resultats de la fonction :

#include <stdio.h>
int facto(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * facto(n - 1);
    }
}
int main()
{
    int num;
    printf("Enter a positive integer to calculate its factorial: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        int result = facto(num);
        printf("Factorial of %d is: %d\n", num, result);
    }

    return 0;
}
// Q2 : Ecrivez une fonction recursive int somme (int n) qui calcule la somme des n premiers entiers positifs (n compris) . verifez son fonctionnement dans