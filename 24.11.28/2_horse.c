#include <stdio.h>

#define  N      8
#define  TRUE   1
#define  FALSE  0

int board[N][N] = {0};

//     0   1   2   3   4   5   6   7
//   --------------------------------- 
// 0 |   |   |   |   |   |   |   |   |
//   ---------------------------------
// 1 |   |   | 7 |   | 0 |   |   |   |
//   --------------------------------- 
// 2 |   | 6 |   |   |   | 1 |   |   |
//   ---------------------------------
// 3 |   |   |   | K |   |   |   |   |
//   --------------------------------- 
// 4 |   | 5 |   |   |   | 2 |   |   |
//   --------------------------------- 
// 5 |   |   | 4 |   | 3 |   |   |   |
//   ---------------------------------
// 6 |   |   |   |   |   |   |   |   |
//   ---------------------------------
// 7 |   |   |   |   |   |   |   |   |
//   ---------------------------------

int dr[N] = { -2, -1,  1,  2,  2,  1, -1, -2};       // delta row
int dc[N] = {  1,  2,  2,  1, -1, -2, -2, -1};       // delta column

void print_board(void) {
    int i, j;

    for (j=0; j < N; j++)
        printf("---");
    printf("\n");

    for (i=0; i < N; i++) {
        for (j=0; j < N; j++)
            if (board[i][j] == 0)
                printf("|  ");
            else                             // so capacity of cell doesn't change it = 2
                printf("|%2i", board[i][j]); // 2i means if it is 1 didgit it will be right-aligned
        printf("|\n");
        
        for (j=0; j < N; j++)
            printf("---");
        printf("\n");
    }
    getchar();     
}

int movement(int r, int c, int move) {
    int i;
    int nr, nc;               // new row, new column
    int result = FALSE;

    for (i=0; i < N; i++) {
        nr = r + dr[i];
        nc = c + dc[i];
        if (0 <= nr && nr < N && 0 <= nc && nc < N && board[nr][nc] == 0) {
            board[nr][nc] = move;
            // print_board();
            if (move == N*N)
                return TRUE;
            result = movement(nr, nc, move+1);
            if ( result == FALSE )
                board[nr][nc] = 0;
        }
    }
    return result;
}

int main(void) {
    int row = 0, col = 0;
    board[row][col] = 1;
   
    if ( movement(row, col, 2) ) {
        print_board();
        getchar();
    } else
        printf("No solution!\n");
        
    return 0;
}