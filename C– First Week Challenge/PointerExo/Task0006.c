#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;

    printf("the value of a is %d \n ", a);
    printf("the value of a  is %d \n ", *p);
    printf("the value of a is %d \n ", **q);
    printf("the value of a is %d \n ", ***r);

    printf("adres of q  is %p \n ", (void *)r);
    printf("adres of p  is %p \n ", (void *)q);
}