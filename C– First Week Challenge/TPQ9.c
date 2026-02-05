// Ecrivez une fonction recusive qui qui rechareche la valeur minimum d'un tableau la fonction doit retourner l'indice de lacase qui contient la plus petite valeur
#include <stdio.h>
int minIndex(int arr[], int n, int index)
{
    if (index == n - 1) // si on est à la fin du tableau, on retourne l'indice actuel
    {
        return index;
    }
    int minIdx = minIndex(arr, n, index + 1); // appel récursif pour trouver l'indice du minimum dans le reste du tableau

    if (arr[index] < arr[minIdx]) // comparer la valeur actuelle avec la valeur minimale trouvée dans le reste du tableau
    {
        return index;
    }
    else
    {
        //  return minIdx;
        return minIdx; // retourner l'indice du minimum trouve dans le reste du tableau
    }
}

int main()
{
    int arr[] = {5, 2, 9, 1, 5, 6};       //  example d'une tableau
    int n = sizeof(arr) / sizeof(arr[0]); //  calculer la taille d'un tableau

    int minIdx = minIndex(arr, n, 0);
    printf("The index of the minimum value is: %d\n", minIdx); // afficher l'indice  de la valeur minimun
    printf("The minimum value is: %d\n", arr[minIdx]);         // ici on veut afficher la valuer manimum
                                                               // ici on veut afficher la valeur manimum

    return 0;
}
