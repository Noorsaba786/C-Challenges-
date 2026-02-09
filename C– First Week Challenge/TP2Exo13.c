#include <stdint.h>

int minNum(int *myArry[], int size)
{
    int min = 0;
    for (int i = 0; i < size; i++)
    {
        if (myArry[i] < min)
        {
            min = myArry[i];
        }
    }
    return min;
}

int mian()
{

    int *MyArr = (int *)malloc(6 * sizeof(int));
    int size = sizeof(Myarr) / sizeof(Myarr[0]);
    printf("the min is  %d", minNum(Myarr, size));
}