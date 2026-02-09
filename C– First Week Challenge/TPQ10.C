#include<stdio.h>


int fib(int U0 , int U1 , int n)
{

    if (n==0 )
    {
     return 0 ; 
    }
    else if (n == 1)
    {
        return 1; 
    }
    else 
    {
   
     n = fib(n-1) + fib (n  -2)
     return n ; 
    }

}


int main ()
{

    int result = fib(5); 
    return 0 ; 

}


