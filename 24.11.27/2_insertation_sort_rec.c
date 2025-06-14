#include <stdio.h>
#define N 10

void print_arr(int a[],  int n){
    for (int i = 0; i<n; i++){
        printf("%i  ", a[i]);
    }
    printf("\n");
}

void insertation_sort_rec(int a[], int key_id, int n){
    // base case
    if(key_id==n) return;
    // recursion func body
    int key = a[key_id];
    int j_id = key_id-1;
    // printf("key_id = %i\n", key_id);
    while (j_id>=0 && a[j_id]>key){
        // printf("j_id = %i\n", j_id);
        a[j_id+1] = a[j_id];
        j_id --;
    }
    a[j_id+1] = key;
    // recursive case
    insertation_sort_rec(a, key_id+1, n);
}

int main(){
    int X[N] = {4, 20, 10, 8, 16, 18, 12, 6, 27, 50};
    // int X[N] = {1, 2, 7, 4, 6, 5, 4, 8, 9, 10};
    // int X[N] = {15, 12, 10, 9, 8, 7, 5, 3, 1, 0};
    print_arr(X,  N);
    insertation_sort_rec(X, 1, N);
    print_arr(X,  N);
}