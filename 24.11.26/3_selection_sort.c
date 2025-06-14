# include <stdio.h>
# define N 10

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

int min(int a[], int l, int r){
    int min_id = l;
    for (int i = l+1; i<r; i++){
        if (a[i]<a[min_id]){
            min_id = i;
        }
    }
    return min_id;
}

void selection_sort_iter(int a[], int n){
    for (int i = 0; i<n; i++){
        int min_id = min(a, i, n-1);
        swap(&a[i], &a[min_id]);
        // print_arr(a,  n);
    }
}

int main (){
    int X[N] = {4, 20, 10, 8, 16, 18, 12, 6, 27, 50};
    print_arr(X,  N);
    selection_sort_iter(X, N);
    print_arr(X,  N);
}