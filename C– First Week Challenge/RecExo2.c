// create a recursive funciton for finding the factorail of a num
#include <stdio.h>
int fact(int num)
{
    if (num == 0)
    {
        return 1; // fac 0 = 1
    }
    else
    { // fac  = n (n-1 )

        return num * fact(num - 1); // 4!  = 1 x 2 X 3 X 4 =  36
                                    // 5 * fac(4)
                                    // 5 * 4 fac(3)
                                    // 5 * 4 *3 fac(2)
                                    // 5 * 4 * 3 fac(1)
                                    // 5 * 4 * 3 * 2 * 1
    }
}

int main()
{
    int result = fact(5);
    printf("factorial 5 is = %d ", result);
    return 0;
}
