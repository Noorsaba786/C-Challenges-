// Ecrire un nouveau programme (nouveau fichier) qui remplit un tableau de 200 case de valeurs entiérs aléatoires entre 10 et 99 . a l`aide d`une boucle for parcourez toutes les case et testez si la case i est infeieur a la suivante i+i . si ce n'est pas le cas inversez les deux case a la fin affichez le tableau vous verrez qu'il n'est pas tiez .
/*

void Q1()
{

int arr[200];
srand (time (NULL));

printf("tableau : \n "); //titre
for(int i = 0 ; i <200 ; i++)
    {
    //arr[i] = rand() %99 + 10; // générer un nombre entre 10 et 99
    arr[i] = rand() %(90) + 10;
    printf("%2d ", arr[i]);
    }

printf("\n tableau après traitment : \n ");
for(int i = 0; i < 200 ; i ++)
    {
        if(arr[i] > arr[i+1])
        {
             int tmp  = arr[i];
             arr[i] = arr[i+1];
             arr[i + 1] = tmp;
        }
             printf("%2d ", arr[i]);

    }
}




*/

/*


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[200];
    srand(time(0)); // Initialiser le générateur de nombres aléatoires

    // Remplir le tableau avec des valeurs aléatoires entre 10 et 99
    for (int i = 0; i < 200; i++) {
        arr[i] = rand() % 90 + 10; // Génère un nombre entre 10 et 99
    }

    // Parcourir le tableau et inverser les éléments si nécessaire
    for (int i = 0; i < 199; i++) {
        if (arr[i] > arr[i + 1]) {
            // Inverser les deux éléments
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    // Afficher le tableau
    printf("Tableau après traitement :\n");
    for (int i = 0; i < 200; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}



*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int myarr[200];
    srand(time(NULL));
    printf("\n ici je veux imprimer les valuer entrer 10 et 99 avant le permutation \n");

    for (int i = 0; i < 200; i++)
    {
        myarr[i] = rand() % 90 + 10; // ou on peut eaglmemt ecrire 99-10+1

        printf(" %2d ", myarr[i]);
    }
    printf("\n  \napres la permutation \n");

    for (int i = 0; i < 199; i++)
    {
        if (myarr[i] > myarr[i + 1])
        {
            int tmp = myarr[i];
            myarr[i] = myarr[i + 1];
            myarr[i + 1] = tmp;
        }
    }

    printf("\n\nApres la permutation (un seul passage):\n");
    for (int i = 0; i < 200; i++)
    {
        printf(" %2d ", myarr[i]);
    }

    return 0;
}