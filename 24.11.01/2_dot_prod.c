// Hrytsenko Iryna
#include <stdio.h>
#define N 5

int dot_prodct(int a[], int b[], int n){
    int s = 0, i;
    for(i = 0; i<n; i++){
        s += a[i]*b[i];
    }
    return s;
}

int main(){
    int x[N] = {1, 2, 3, 4, 5};
    int y[N] = {2, 2, 2, 2, 2};
    
    int res = dot_prodct(x, y, N);
    printf("s = %i", res);
    
    return 0;
}