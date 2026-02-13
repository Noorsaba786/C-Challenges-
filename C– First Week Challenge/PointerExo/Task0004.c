/*

#include <stdio.h>

void change(int x)
{
    x = 4;
}

int main(int a)
{
    a = 5;

    change(a);

    printf("the value of a is %d", a);
}


*/

#include <stdio.h>
void change(int *x)
{

    *x = 5;
}

int main()
{
    int a = 6;

    change(&a);
    printf("the valsue is %d", a);
}