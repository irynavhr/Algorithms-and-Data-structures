#include <stdio.h>  
#define N 10

int binary_search_rec(int a[],  int l, int r,  int key){
    if (l>r){
        return -1;
    }
    int m = (l+r)/2;
    if (a[m]==key){
        return m;
    }else if (a[m]>key){
        return binary_search_rec(a, l, m-1, key);
    }else {
        return binary_search_rec(a, m+1, r, key);
    }
}

int main(){
    int X[N] = {2, 4, 6, 8, 10, 12, 16, 18, 20, 27};

    printf("%i\n", binary_search_rec(X, 0, N, 2));
    printf("%i\n", binary_search_rec(X, 0, N, 16));
    
}