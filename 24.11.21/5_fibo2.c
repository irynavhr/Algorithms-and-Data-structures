// Hrytsenko Iryna
#include <stdio.h>
#define N 10

int main(void) {
    int f0, f1, f2;
    f0 = 0;
    f1 = 1;
    for (int i = 2; i<=N; i++){
        f2 = f1 + f0;
        printf("%i  ", f2);
        f0 = f1;
        f1 = f2;
    }
    printf("\nfinal = %i  ", f2);
    
    
    return 0;
}