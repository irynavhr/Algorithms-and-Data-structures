#include <stdio.h>
#define N 10


void print_arr(int a[],  int n){
    for (int i = 0; i<n; i++){
        printf("%i  ", a[i]);
    }
    printf("\n");
}

void insertation_sort(int a[], int n){
    int key;
    int j;
    for (int i=1; i<n; i++){
        key = a[i];
        j = i-1;
        while (j>=0 && a[j]>key){
            a[j+1] = a[j];
            j --;
        }
        a[j+1] = key;
    }
}

int main(){
    int X[N] = {4, 20, 10, 8, 16, 18, 12, 6, 27, 50};
    // int X[N] = {1, 2, 7, 4, 6, 5, 4, 8, 9, 10};
    // int X[N] = {15, 12, 10, 9, 8, 7, 5, 3, 1, 0};
    print_arr(X,  N);
    insertation_sort(X, N);
    print_arr(X,  N);
}