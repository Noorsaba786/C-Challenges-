// cree une programme qui affiche combien de jour comporte un mois donne pour le mois de fevrier soit 28 ou 29 jours  pour cela  on doit utiliser switch case

#include <stdio.h>

int main()
{

    int month;
    printf("enter a month number (1- 12)  ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("this month has 31 days");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("this month has 30 days");
        break;

    case 2:
        printf("this month has 29 or 28 days  days");
        break;

    default:
        printf("invalid month ");
        break;
    }
    return 0;
}
