// Stracture de donnes et pointeurs  ,  des date
// Q1 : Definissez un type enum jour pour defenir chque jour de la semaine .

#include <stdio.h>
#include <string.h>

typedef enum
{
    Lundi,
    Mardi,
    Mercredi,
    Jeudi,
    Vendredi,
    Samedi,
    Dimanche
} Jour;

int main()
{
    Jour today = Mercredi;

    switch (today)
    {
    case Lundi:
        printf("Aujourd'hui, c'est Lundi.\n");
        break;
    case Mardi:
        printf("Aujourd'hui, c'est Mardi.\n");
        break;
    case Mercredi:
        printf("Aujourd'hui, c'est Mercredi.\n");
        break;
    case Jeudi:
        printf("Aujourd'hui, c'est Jeudi.\n");
        break;
    case Vendredi:
        printf("Aujourd'hui, c'est Vendredi.\n");
        break;
    case Samedi:
        printf("Aujourd'hui, c'est Samedi.\n");
        break;
    case Dimanche:
        printf("Aujourd'hui, c'est Dimanche.\n");
        break;
    default:
        printf("Jour inconnu.\n");
        break;
    }

    return 0;
}
