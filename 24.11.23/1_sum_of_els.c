// Hrytsenko Iryna                        
#include <stdio.h>

#define N 9

int sum_iterative(int a[]){
    int sum = 0;
    for (int i = 0; i < N; i++){
        sum+= a[i];
    }
    return sum;
}
int sum_iterative_rev(int a[]){
    int sum = 0;
    for (int i = N-1; i >= 0; i--){
        sum+= a[i];
    }
    return sum;
}
int sum_recrsive(int a[], int n){
    if (n == 1){
        return a[0];
    }
    return a[n-1] + sum_recrsive(a, n-1);
}
int sum_recrsive_un(int a[], int l, int r){
    if (l==r){
        return a[l];
    }
    return a[l] + sum_recrsive_un(a, l+1, r);
}

int sum_recrsive_un_b(int a[], int l, int r){
    if (r<l){
        return 0;
    }
    if (l==r){
        return a[l];
    }
    return a[l] + sum_recrsive_un_b(a, l+1, r-1) + a[r];
}



int main(void) {
    int a[9] = {2, 3, 4, 5, 80, 4, 25, 7, 6};
    printf("\niterative = %i  ", sum_iterative(a));
    printf("\niterative_rev = %i  ", sum_iterative_rev(a));
    printf("\nsum_recrsive = %i  ", sum_recrsive(a, N));
    printf("\nsum_recrsive_un = %i  ", sum_recrsive_un(a, 0, N-1));
    printf("\nsum_recrsive_un = %i  ", sum_recrsive_un_b(a, 0, N-1));

    
    
    return 0;
}