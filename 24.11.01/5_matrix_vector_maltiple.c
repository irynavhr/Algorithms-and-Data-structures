// Hrytsenko Iryna - HW
#include <stdio.h>
#define N 3
#define M 5

void matrix_vect_muult(int A[][M], int b[], int c[], int n, int m){
    for (int i = 0; i < n; i++){
        int dot_prod = 0;
        for(int j = 0; j < m; j++){
            dot_prod += A[i][j]*b[j];
        }
        c[i] = dot_prod;
    }
}

int main(){
    int A[N][M] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    int x[M] = {1, 2 , 3, 4, 5};
    int r[N];
    
    matrix_vect_muult(A, x, r, N, M);

    for (int i = 0; i < N; i++){
        printf("%i\t", r[i]);
    }
    
    return 0;
}