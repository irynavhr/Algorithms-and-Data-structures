// Hrytsenko Iryna
#include <stdio.h>
#define N 10

int main(void) {
    int i, f[N+1];

    f[0] = 0;
    f[1] = 1;
    for (i = 2; i<=N; i++){
        f[i] = f[i-1] + f[i-2];
    }
    
    for ( i = 0; i<=N; i++){
        printf("%i  ", f[i]);
    }
    
    return 0;
}