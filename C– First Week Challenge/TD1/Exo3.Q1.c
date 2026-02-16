#include <stdio.h>
#include <stdlib.h>

typedef int Tab100[100];

int main()
{
    Tab100 T;
    T[0] = 90;
    T[1] = 3;

    printf("The first value is   %d ", T[0]);
}
