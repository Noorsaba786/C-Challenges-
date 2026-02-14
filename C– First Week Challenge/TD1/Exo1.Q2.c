// i want to swap value using pointer
/*
int swap(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    printf("after swap the value are :s %d , %d  \n ", a, b);
}

int main()
{
    printf("i want to swap  5  and 9  \n", swap(5, 9));
}


*/

/*

int swap(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int x = 6;
    int y = 9;
    printf("befor swap: %d , %d \n \n", x, y);  // it does not swap because we passed by value and in the fucniont we just send the copy of x and y not the real value of x and y . C works with copy of value not its origin
    // example i want to  give my notes to SABA to have a my notes but in really its not the same notes its just copy if she want to destroy my notes  the original one does not change its just the copy .
    swap(x, y);

    printf("the swap values are \n \n: %d , %d", x, y);
}


*/

// so to fix the problem we want to change the real  value of each varilbe insid memory via pinter  here is who it works
#include <stdio.h>
int swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int x = 5;
    int y = 6;

    swap(&x, &y);
    printf("the swap values are : %d , %d ", x, y);
}
// mission has been completed !!!!!