//сортування злиттям

#include <stdio.h>
#include <stdlib.h>
#define N 8

void Merge(int A[], int p, int q, int r){
    int n_L, n_R;
    int *L, *R;
    int i, j, k;

    n_L = q - p + 1;
    n_R = r - q;

    L = (int *) malloc(n_L*sizeof(int));
    R = (int *) malloc(n_R*sizeof(int));

    for (i = 0; i <= n_L - 1; i++) {
        L[i] = A[p + i];
    }

    for (j = 0; j <= n_R - 1; j++) {
        R[j] = A[q + j + 1];
    }

    i = 0;
    j = 0;
    k = p;
    //...

    while (i < n_L && j < n_R) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i = i+1;
        } else {
            A[k] = R[j];
            j = j+1;
        }
        k = k+1;
    }


    while (i < n_L) {
        A[k] = L[i];
        i = i+1;
        k = k+1;
    }

    while (j < n_R) {
        A[k] = R[j];
        j = j+1;
        k = k+1;
    }

    free(L); free(R);
}

void Merge_Sort(int A[], int p, int r){
    int q;

    if(p >= r) return;

    q = (p + r)/2;

    Merge_Sort(A, p, q);
    Merge_Sort(A, q+1, r);

    Merge(A, p, q, r);
}

void print_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%i  ", a[i]);
    }
    printf("\n");
}

int main(void){
    int X[N+1] = {0, 12, 3, 7, 9, 14, 6, 11, 2};

    Merge_Sort(X, 1, N);
    print_array(X, N);
    return 0;
}
