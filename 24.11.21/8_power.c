// Hrytsenko Iryna
#include <stdio.h>
#define N 10
#define A 2

int power(int a, int n){
    int st = 1;
    for (int i = 1; i<=n; i++){
        st*= a;
    }
    return st;
}

int main(void) {
    
    printf("\nfinal = %i  ", power(A, N));
    
    
    return 0;
}