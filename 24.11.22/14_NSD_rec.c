// Hrytsenko Iryna                         realise recursive way
#include <stdio.h>
#define B 1520
#define A 2700

// Running time: O(logn)
int nsd(int a, int b){
    int c = 1;
    int i;
    // while(c){
    for(i = 1; c>0; i++){
        if ((a%b) == 0) break;
        c = a%b;
        a = b;
        b = c;
    }
    printf("i = %i", i);
    return b;
}

int main(void) {
    
    printf("\nfinal = %i  ", nsd(A, B));
    
    
    return 0;
}