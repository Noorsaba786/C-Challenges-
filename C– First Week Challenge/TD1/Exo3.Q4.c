#include <stdio.h>

typedef int Tab100[10];

void saisi2(Tab100 T)
{

    for (int i = 0; i < 10; i++)
    {
        printf("enter the fist value of tableau T[%d]", i);
        scanf("%d", &T[i]);
    }
}

int main()
{

    Tab100 T;
    saisi2(T);
    return 0;
}