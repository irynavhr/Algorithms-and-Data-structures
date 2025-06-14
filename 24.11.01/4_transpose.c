// Hrytsenko Iryna - HW
#include <stdio.h>
#define N 3
#define M 5
// relise transposin of matrix        O(M*N)
void transpose(int A[][M], int B[][N], int n, int m){
    for (int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            B[i][j] = A[j][i];
        }
    }
}

int main(){
    int A[N][M] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int A_T[M][N];
    
    transpose(A, A_T, N, M);

    for (int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            printf("%i\t", A_T[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}