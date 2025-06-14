#include <stdio.h>
 
#define  TRUE   1
#define  FALSE  0
#define  N      8
 
int board[N][N] = {TRUE}; 

void print_board(void) {
    int i, j;
    // print horisontal line
    for (j=0; j < N; j++)
        printf("---");
    printf("\n");
    for (i=0; i < N; i++) {
        // print Q
        for (j=0; j < N; j++)
            if (board[i][j] == 0)
                printf("|  ");
            else
                printf("| Q");
        printf("|\n");
        // print horisontal line
        for (j=0; j < N; j++)
            printf("---");
        printf("\n");
    }
    getchar();
}

int is_legal(int r, int c) {
    int i;
    // check horizontal line
    for (i=0; i < c; i++)
        if (board[r][i] == 1)
            return FALSE;
    // check diagonal
    i=1;
    while (r-i >= 0 && c-i >= 0) {
        if (board[r-i][c-i])
            return FALSE;
            i++;
    }
    i=1;
    while (r+i <= N-1 && c-i >= 0) {
        if (board[r+i][c-i])
            return FALSE;
            i++;
    }
    return TRUE;
}

int set_queen(int col) {
    // int row;
    // if (col == N)
    //     print_board();
    // else {
    //     for (row=0; row < N; row++)
    //         if ( is_legal(row, col) ) {
    //             board[row][col] = 1;
    //             print_board();
    //                  // next column
    //             board[row][col] = 0;  
    //         }
    // }   
    int row;
    int result = FALSE;
    for (row=0; row < N; row++){
        if ( is_legal(row, col) ){
            board[row][col] = 1;
            // print_board();
            if (col+1 == N){
                print_board();
                return TRUE;
            }
            result = set_queen(col+1);
            if(result == FALSE) 
                board[row][col] = 0;
        }
    }
    return result;
}

int main(void) {
    set_queen(0);
    // print_board();
   
    return 0;
}