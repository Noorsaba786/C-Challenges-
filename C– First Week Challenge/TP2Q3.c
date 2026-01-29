// Fonctions
//  Ecrivez un  sous programme ligne(....) qui ne prend aucum parametere et qui affiche une ligne de 10 etoiles a l'ecran . le programme pricipale demand  a l'utlilisateur de saisr une valeur n et appelle ligne() n fois  verifier que le programme fonctionne correctement
/*

#include <stdio.h>
void ligne()
{
    for (int i = 0; i < 10; i++)
    {
        printf("*");
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        ligne();
    }

    return 0;
}


*/

// modifiez le programme precedant de tellle sorte que le nombre e'etoiles d'une linge soit aussi donne par l'utilisateur la focntion ligne doit prendre un parametre entier qui correspond au nombre d'etoiles a afficher if faut pas utiliser de scanf dans la fonction ligne

#include <stdio.h>
void ligne(int stars)
{
    for (int i = 0; i < stars; i++)
    {
        printf("*");
    }
    printf("\n");
}
int main()
{
    int n, stars;
    printf("Enter a value for n (number of lines): ");
    scanf("%d", &n);
    printf("Enter a value for stars (number of stars per line): ");
    scanf("%d", &stars);
    for (int i = 0; i < n; i++)
    {
        ligne(stars);
    }

    return 0;
}
