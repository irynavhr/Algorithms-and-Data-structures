// Hrytsenko Iryna
#include <stdio.h>
// #define N 10

int main(void) {
    int n = 5;
    int prod = 1;
    for (int i = 1; i<=n; i++){
        prod *= i;
    }
    printf("fact = %i", prod);
    return 0;
}