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
    int row;
    int res = FALSE;
    if (col == N)
        return TRUE;
    else {
        for (row=0; row < N; row++)
            if ( is_legal(row, col) ) {
                board[row][col] = 1;
                // print_board();
                set_queen(col+1);      // next column
                if (res == FALSE)
                    board[row][col] = 0;  
            }
    }   
    return res;
}

int main(void) {
    if (set_queen(0)){
        print_board();
        // printer
    }else{
        printf("No solution!");
    }
    // set_queen(0);
    // print_board();
   
    return 0;
}