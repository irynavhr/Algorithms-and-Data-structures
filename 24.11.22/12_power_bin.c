// a^n

// Hrytsenko Iryna
#include <stdio.h>
#define N 3
#define A 3

// Running time: O(logn)
int power_binary(int a, int n){
    int res = 1;
    if(n==0){
        return 1;
    }
    for ( ; n>0;  ){
        if(n%2 == 1){
            res *= a;
        }
        a = a*a;
        n /= 2;

    }
    return res;
}

int main(void) {
    
    printf("\nfinal = %i  ", power_binary(A, N));
    
    
    return 0;
}