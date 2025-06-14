#include <stdio.h>
#include <stdlib.h>
#define N 10
int heap_size = N;

int Parent(int i) {
    return i/2;
}

int Left(int i) {
    return 2 * i;
}

int Right(int i) {
     return 2 * i + 1;
}

void Exchange(int *a, int *b) {
    int tmp = 0;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void Max_Heapify (int A[], int n, int i) {
    int largest = 0;
    int l = Left(i);
    int r = Right(i);
    int tmp;

    if (l <= heap_size && A[l] > A[i]) {
        largest = l;
    } else largest = i;

    if (r <= heap_size && A[r] > A[largest]) {
        largest = r;
    }

    if (largest != i){
        Exchange(&A[i], &A[largest]);
        Max_Heapify(A, N, largest);
    }
}

void print_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%i  ", a[i]);
    }
    printf("\n");
}

int main(void) {
    int X[N + 1] = {0, 16, 4, 10, 14, 7, 9, 3, 2, 8, 1};
    Max_Heapify(X, N, 2);
    print_array(X, N+1);
    return 0;
}
