# include <stdio.h>
# define N 10

//relise rec buble - hw

void swap(int *pa, int *pb){
    int t;
    t = *pa;
    *pa = *pb;
    *pb = t;
}

void print_arr(int a[],  int n){
    for (int i = 0; i<n; i++){
        printf("%i  ", a[i]);
    }
    printf("\n");
}


void buble_sort_rec(int a[],  int n){ 
    for(int j = 1; j<=n-1; j++){ 
        if(a[j-1]>a[j])
            swap(&a[j-1], &a[j]);
    }
    // printf("n = %i\n", n);
    if (n == 2) return;
    buble_sort_rec(a, n-1);
}

int main(){
    int X[N] = {4, 20, 10, 8, 16, 18, 12, 6, 27, 50};
    // int X[N] = {1, 2, 7, 4, 6, 5, 4, 8, 9, 10};
    // int X[N] = {15, 12, 10, 9, 8, 7, 5, 3, 1, 0};
    print_arr(X,  N);
    buble_sort_rec(X,  N);
    print_arr(X,  N); 
}