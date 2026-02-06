// wrtie a recursive function that takes an integer as a parameter and counts down from that number to 0, printing each number .

#include <stdio.h>

void coutDown(int num)
{

    if (num == 0)
    {
        return;
        printf("%d \n", num);

        coutDown(num - 1);
    }
}

int main()
{

    coutDown(5);
    return 0;
}