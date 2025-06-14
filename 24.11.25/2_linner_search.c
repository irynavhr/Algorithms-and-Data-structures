#include <stdio.h>
#define N 10

int linear_search_iter(int a[],  int n, int key){
    for (int i = 0; i<n; i++){
        if (a[i] == key){
            return i;
        }
    }
    return -1;
}

int linear_search_rec(int a[],  int n, int key){
    if (n == 0){
        return -1;
    }
    if (a[n-1] == key){
        return n-1;
    }
    return linear_search_rec(a, n-1, key);
}


int main(){
    int X[N] = {9, 2, 5, 0, 8, 7, 1, 4, 6, 3};

    printf("%i\n", linear_search_iter(X, N, 5));
    printf("%i\n", linear_search_iter(X, N, 10));
    printf("%i\n", linear_search_rec(X, N, 5));
    printf("%i\n", linear_search_rec(X, N, 10));
}