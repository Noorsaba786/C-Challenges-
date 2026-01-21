// create a function that can swap two numbers using pointers

#include <stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 5;
    int b = 10;

    printf("Avant l'echange: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("Apres l'echange: a = %d, b = %d\n", a, b);

    return 0;
}
