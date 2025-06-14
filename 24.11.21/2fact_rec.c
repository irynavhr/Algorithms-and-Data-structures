// Hrytsenko Iryna
#include <stdio.h>
// #define N 10

int factorial(int q) {
    if (q==0||q==1){
        return 1;
    }
    return q*factorial(q-1);
}

int main(void) {
    int n = 7;
    
    printf("fact = %i", factorial(n));
    return 0;
}