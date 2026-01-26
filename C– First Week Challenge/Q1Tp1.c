#include <stdio.h>

/*
practice 1
int main()
{

    char nom[50];
    char prenom[50];

    printf("votre nom ");
    scanf("%s", nom);

    printf("votre prenom \n ");
    scanf("%s", prenom);

    printf("salut %s %s  \n", nom, prenom);
}
*/

int main()
{
    char ville[50];
    char permis[50];

    printf("Bonjour ");

    printf("Vous habitez dans quelle ville ");
    scanf("%s", ville);

    printf("vous allez pasez votre examen de permis qand ? ");
    scanf("%s", permis);

    printf("vous habitez a %s et vous allez passe vorte permis le mois de %s", ville, permis);
}

/*
int main()
{
    char prenom[50];
    char nom[50];

    printf("votre prenom");
    scanf("%s", prenom);

    printf("Vote nom ");
    scanf("%s", nom);

    printf("Bojour %s %s \n ", prenom, nom);
}

*/
