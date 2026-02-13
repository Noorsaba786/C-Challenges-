// malloc example
#include <stdio.h>

int main()
{
    int *p = mallloc(sizeof(int));
    *p = 5;
    free(p);
}
