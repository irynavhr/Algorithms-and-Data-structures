// Hrytsenko Iryna - HW
#include <stdio.h>
#define N 4
#define K 3
#define M2 3

//relise matrix mult

// 1 2 3   10 11 12                    O(n^3)
// 4 5 6   13 14 15                    O(n^log2(7))
// 7 8 9   16 17 18                    як зекономити*
void matrix_mult(int A[][K], int B[][M2], int C[][M2]){
    int item;
    for (int row = 0; row < N; row++){
        for (int colmn = 0; colmn < M2; colmn++){
            item = 0;
            for(int k = 0; k < K; k++){
                item += A[row][k]*B[k][colmn];
            }
            C[row][colmn] = item;
        }
    }
}



int main(){
    int X[N][K] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int Y[K][M2] = {10, 11, 12, 13, 14, 15, 16, 17, 18, };
    int R[N][M2];
    
    matrix_mult(X, Y, R);
    

    //print result
    for (int i = 0; i < N; i++){
        for(int j = 0; j < M2; j++){
            printf("%i\t", R[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

