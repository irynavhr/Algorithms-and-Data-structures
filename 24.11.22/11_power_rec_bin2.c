// a^n

// Hrytsenko Iryna
#include <stdio.h>
#define N 10
#define A 2

// Running time: O(logn)
int power_rec_binary(int a, int n){
    int st = 1;
    if (n == 0){
        return 1;
    }
    if (n == 1){
        return a;
    }
    int tmp = power_rec_binary(a, n/2);
    if (n%2 == 1){
        return tmp*tmp*a;
    }
    return tmp*tmp;
}

int main(void) {
    
    printf("\nfinal = %i  ", power_rec_binary(A, N));
    
    
    return 0;
}