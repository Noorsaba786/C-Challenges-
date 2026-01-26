#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Ecrire une fonciton quiinverse a digit  d'une nombre entiere

/*method sample avec foumule */


int inverseNum(int num)
{
    int inversNum = 0;

    while (num != 0) // tant que num n'est pas egal a 0
    {
        inversNum = inversNum * 10 + num % 10; // on ajoute le dernier digit de num a inversNum par example si num = 123 , inversNum = 0*10 + 3 = 3
                                               // puis inversNum = 3*10 + 2 = 32
                                               // puis inversNum = 32*10 + 1 = 321
        num /= 10;
    }
    return inversNum;
}
int main()
{
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);

    int reversedNumber = inverseNum(number);
    printf("The reversed number is: %d\n", reversedNumber);

    return 0;
}

// method avec la logique de de tableau
/*
#include <stdio.h>
#include <string.h>

int reverseNum(int num)
{
    char numToString[12];     // pour stocker le nombre converti en chaine de caractere
    char reverseNum[12] = ""; // pour stocker le nombre inverse en chaine de caractere
    int j = 0; // index pour reverseNum 

    sprintf(numToString, "%d", num); // convertir le nombre en chaine de caractere

    for (int i = strlen(numToString) - 1; i >= 0; i--) // strlen pour obtenir la longueur de la chaine de caractere on peut pas utiliser lenght car c'est pour les tableaux statique ou sizeof
    {
        reverseNum[j++] = numToString[i]; // on ajoute chaque caractere de la fin vers le debut
    }

    reverseNum[j] = '\0'; // ajouter le caractere de fin de chaine

    return atoi(reverseNum); // convertir la chaine de caractere en nombre entier atoi = ascii to integer
}

int main()
{
    printf("%d\n", reverseNum(123));
    return 0;
}

*/

