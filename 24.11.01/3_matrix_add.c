// Hrytsenko Iryna
#include <stdio.h>
#define N 3
#define M 5

void matrix_add(int a[][M], int b[][M], int c[][M], int n, int m){
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main(){
    int x[N][M] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    int y[N][M] = {{2, 2, 2, 2, 2}, {3, 3, 3, 3, 3}, {4, 4, 4, 4, 4}};
    int z[N][M];
    
    matrix_add(x, y, z, N, M);
    // for (int i = 0; i < M; i++){
    //     for(int j = 0; j < N; j++){
    //         z[i][j] = x[i][j] + y[i][j];
    //     }
    // }
    for (int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("%i\t", z[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}