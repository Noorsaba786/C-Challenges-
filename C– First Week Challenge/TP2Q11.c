#include <stdio.h>
#include <stdlib.h>

int minIndex(int *arr, int size)
{
    int min = 0;
    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) < *(arr + min))
            min = i;
    }
    return min;
}

int main()
{
    int arry[] = {4, 5, 7, 2, 6};
    int size = sizeof(arry) / sizeof(arry[0]);

    int *arr = malloc(size * sizeof(int));
    if (arr == NULL)
        return 1;

    for (int i = 0; i < size; i++)
        arr[i] = arry[i];

    printf("min index = %d\n", minIndex(arr, size));

    free(arr);
    return 0;
}