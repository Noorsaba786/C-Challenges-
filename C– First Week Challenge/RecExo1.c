// wrtie a recursive function that takes an integer as a parameter and counts down from that number to 0, printing each number .
/*
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
*/

#include <stdio.h>

int facto(int num)
{
    if (num == 0)
    {
        return 1;
    }

    else
    {
        int result = num * facto(num - 1);
    }
}
int main()
{
    int result;
    facto(5);
    printf("The result is  %d ", result);
    return 0;
}
