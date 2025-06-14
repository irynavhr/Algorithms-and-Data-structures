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

void buble_sort_iter(int a[],  int n){
    int flag = 1;
    for(int i = n-1; flag && 1<=i; i--){
        flag = 0;
        // printf("i = %i\n", i);
        for(int j = 1; j<=i; j++){
            // printf("j = %i\n", j);
            if(a[j-1]>a[j]){
                swap(&a[j-1], &a[j]);
                flag = 1;
            }
        }
        // print_arr(a,  N);
    }
    
}

int main(){
    int X[N] = {4, 20, 10, 8, 16, 18, 12, 6, 27, 50};
    // int X[N] = {1, 2, 7, 4, 6, 5, 4, 8, 9, 10};
    print_arr(X,  N);
    buble_sort_iter(X,  N);
    print_arr(X,  N);
}