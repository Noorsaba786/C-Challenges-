// utilisez  votre programe de tri a bulles precedent et trsformez le de amainere a cree une fonction de tri qui doit respecter le prototaype suivant :
#include <stdio.h>
void triBulles(int tab[], int taille)
{

    for (int j = 0; j < taille; j++)
    {
        for (int i = 0; i < taille - j - 1; i++)  // iteration 1 :  j = 0  size (taille) = 7    7 - 0 - 1 = 6:    => max last  [4, 2, 4, 1, 4, 1, 3]
                                                     //    [4, 2, 4, 1, 4, 1, 4]
                                                  // itertation 2 :  7 -1 - 1 = 5  = [4, 2, 4, 1, 4, 1, 4]
        {
            if (tab[i] > tab[i + 1])
            {
                int tmp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = tmp;
            }
        }
    }
}

int main()
{
    int myarry[] = {4, 2, 4, 1, 4, 1, 3};
    int taille = sizeof(myarry) / sizeof(myarry[0]);
    triBulles(myarry, taille);
    printf("the sorted array is :");
    for (int i = 0; i < taille; i++)
    {
        printf(" %d ", myarry[i]);
    }
}
