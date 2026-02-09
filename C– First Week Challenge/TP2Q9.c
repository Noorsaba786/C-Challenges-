/*

Ecrivez une fonction (toujours r´ecursive !) qui recherche la valeur minimum d’un tableau.
La fonction doit retourner l’indice de la case qui contient la plus petite valeur.
Astuce : il est possible de fixer la taille d’un tableau `a l’aide de la macro #define, vue en cours.
Nous appelerons SIZE MAX la taille d’un tableau. Pour les premiers tests, utilisez des petites
tailles (disons une vingtaine de valeurs). */

#include <stdio.h>
#define SIZE_MAX 20
int findMinIndex(int arr[], int n, int index, int minIndex)
{
    if (index == n)
        return minIndex;

    if (arr[index] < arr[minIndex])
        minIndex = index;

    return findMinIndex(arr, n, index + 1, minIndex);
}
int main()
{
    int arr[SIZE_MAX], n, minIndex;

    printf("Enter the number of elements in the array (max %d): ", SIZE_MAX);
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }


    minIndex = findMinIndex(arr, n, 0, 0);