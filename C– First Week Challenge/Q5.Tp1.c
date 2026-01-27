// ecrie une programme qui montre si une annee est bissectile ou pas

#include <stdio.h>

int main()
{
    printf("enter an year : \n");
    int year;
    scanf("%d", &year);
    if ((year % 4 == 0) && (year % 100 != 0) && (year % 400 >= 0))
    {
        printf("the year is bissextile");
    }
    else
    {
        printf("the year is not bissextile");
    }
    return 0;
}