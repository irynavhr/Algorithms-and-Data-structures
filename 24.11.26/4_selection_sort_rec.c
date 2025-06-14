# include <stdio.h>
# define N 10

// relise rec - hw

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

int maxx(int a[], int l, int r){
    int max_id = l;
    for (int i = l+1; i<=r; i++){
        if (a[i]>a[max_id]){
            max_id = i;
        }
    }
    return max_id;
}

void selection_sort_rec(int a[], int n){
    int max_id = maxx(a, 0, n-1);
    swap(&a[n-1], &a[max_id]);
    if(n>=2)
        selection_sort_rec(a, n-1);
    else return;
}

int main (){
    // int X[N] = {4, 20, 10, 8, 16, 18, 12, 6, 27, 50};
    // int X[N] = {1, 2, 7, 4, 6, 5, 4, 8, 9, 10};
    int X[N] = {15, 12, 10, 9, 8, 7, 5, 3, 1, 0};
    print_arr(X,  N);
    selection_sort_rec(X, N);
    print_arr(X,  N);
}