#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern "C" {

    int main(int argc, char ** argv) {
        printf("WebAssembly module loaded\n");
    }
    
    int roll_dice() {
        srand ( time(NULL) );
        return rand() % 6 + 1;
    }
    
    int fib(int n)
    {
      if (n <= 1)
          return n;
       return fib(n-1) + fib(n-2);
    }

}