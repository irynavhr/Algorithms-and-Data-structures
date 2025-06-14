// Hrytsenko Iryna
#include <stdio.h>
#define N 5

// <1, 2, 3, 4, 5>
// <2, 2, 2, 2, 2>
// c = a+ b
void vect_add(int a[], int b[], int c[], int n){
    int i;
    for (i =0; i<n; i++){
        c[i] = a[i] +b[i]; // *(c+i) = *(a+i) + *(b+i)
    }
}


int main(){
    int x[N] = {1, 2, 3, 4, 5};
    int y[N] = {2, 2, 2, 2, 2};
    int z[N];
    vect_add(x, y, z, N);

    for(int i = 0; i < N; i++){
        printf("%i\t", z[i]);
    }

    return 0;
}