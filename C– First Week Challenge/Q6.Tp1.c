#include <stdio.h>

int main()
{
    int month;

    printf("Entrez le numero du mois (1-12) : ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:  // Janvier
    case 3:  // Mars
    case 5:  // Mai
    case 7:  // Juillet
    case 8:  // Août
    case 10: // Octobre
    case 12: // Décembre
        printf("Ce mois contient 31 jours.\n");
        break;

    case 4:  // Avril
    case 6:  // Juin
    case 9:  // Septembre
    case 11: // Novembre
        printf("Ce mois contient 30 jours.\n");
        break;

    case 2: // Février
        printf("Ce mois contient 28 jours.\n");
        break;

    default:
        printf("Mois invalide ! Entrez un nombre entre 1 et 12.\n");
    }

    return 0;
}
