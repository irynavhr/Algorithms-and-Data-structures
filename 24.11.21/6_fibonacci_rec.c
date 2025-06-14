// Hrytsenko Iryna
#include <stdio.h>
// #define N 10

int fibo(int q) {
    if (q==0){
        return 0;
    }
    if (q==1){
        return 1;
    }
    return fibo(q-1) + fibo(q-2);
}

int main(void) {
    int n = 10;
    
    printf("fibo = %i", fibo(n));
    return 0;
}