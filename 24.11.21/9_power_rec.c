// a^n

// Hrytsenko Iryna
#include <stdio.h>
#define N 12
#define A 2

int power_rec(int a, int n){
    int st = 1;
    if (n == 0){
        return 1;
    }
    return a*power_rec(a, n-1);
}

int main(void) {
    
    printf("\nfinal = %i  ", power_rec(A, N));
    
    
    return 0;
}