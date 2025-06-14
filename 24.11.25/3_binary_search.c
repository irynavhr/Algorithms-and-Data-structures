#include <stdio.h>
#define N 10

int binary_search(int a[],  int n, int key){
    int l = 0, 
        r = n-1,
        m;

    while (r>=l){
        m = (l+r)/2;
        if (a[m]==key){
            return m;
        }else if (a[m]>key){
            r = m-1;
            continue;
        }else{
            l = m+1;
            continue;
        }
    }
    return -1;
}

int main(){
    int X[N] = {2, 4, 27, 31, 50, 59, 67, 88, 99, 101};

    printf("%i\n", binary_search(X, N, 1));
    printf("%i\n", binary_search(X, N, 2));
    printf("%i\n", binary_search(X, N, 4));
    printf("%i\n", binary_search(X, N, 27));
    printf("%i\n", binary_search(X, N, 46));
    printf("%i\n", binary_search(X, N, 90));
    printf("%i\n", binary_search(X, N, 99));
    printf("%i\n", binary_search(X, N, 101));
    printf("%i\n", binary_search(X, N, 201));
    
}