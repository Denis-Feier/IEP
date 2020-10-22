#include "adder.h"

int fib(int n) {
   if (n <= 1)
   return n;
   return fib(n-1) + fib(n-2);
}

int ackermann(int m, int n) {
    if(m==0)
        return n+1;
    else if(n==0)
        return ackermann(m-1,1);
    else
        return ackermann(m-1,ackermann(m,n-1));
}