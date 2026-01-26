// Ecrire un programme qui permute 2 valeurs sans utilisation de la variable tmp

#include <stdio.h>

/*

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

*/

/*
practie 1 :
int main()
{

    int a;
    int b;

    printf("entrez une valuer pour a \n");
    scanf("%d", &a);

    printf("entrez une valuer pour b \n");
    scanf("%d", &b);

    int tmp = a;
    a = b;
    b = tmp;

    printf("Apres la permutation la valuer de a devient  %d et la valeur de b devient %d", a, b);
    return 0;
}


*/

// ecrie la meme programme mais pour trois valeur  floatat
int main()
{
    float a = 5.2;
    float b = 3.4;
    float c = 4.6;
    /*
       float tmp = a;
       a = b;
       b = c;
       c = tmp;
   */
    float tmp = a;
    a = c;
    c = b;
    b = tmp;

    printf("les valuer aprs la permuation  a = %f , b = %f c= %f", a, b, c);
}
