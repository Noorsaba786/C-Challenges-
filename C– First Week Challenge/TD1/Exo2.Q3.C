#include <stdio.h>

void afficheTab(int tab[])
{
    int *p;
    p = &tab[0];

    for (int i = 0; i < 10; i++) // loop to fill the array
    {
        tab[i] = i;
    }

    for (int i = 0; i < 10; i++) // loop to print the array
    {
        printf("the value of  %d is %d \n", i, *(p + i));
        printf("the adress  of  %d is %p \n", i, (void *)(p + i));
    }
}

int main()
{
    int mytabl[10];
    afficheTab(mytabl);
}