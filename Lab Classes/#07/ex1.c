#include <stdio.h>

int fib (int n) { 
   if (n < 2)
      return n;

   else
      return fib(n - 1) + fib(n - 2);
}

int main() {
   int i;
   scanf("%d", &i);
   printf("fib(%d) = %d\n", i, fib(i));

   return 0;
}
