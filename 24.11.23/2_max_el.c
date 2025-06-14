// Hrytsenko Iryna                        
#include <stdio.h>

#define N 9

int max_el(int a[]){
    int max = a[0];
    for (int i = 1; i < N; i++){
        if (a[i]> max) max = a[i];
    }
    return max;
}

int max_el_2(int a[]){
    int max = a[N-1];
    for (int i = N-2; i >= 0; i--){
        if (a[i]> max) max = a[i];
    }
    return max;
}

int max_el_rec(int a[], int n){
    if (n==1){
        return a[n-1];
    }else{
        if (a[n-1] > max_el_rec(a, n-1)){
        return a[n-1];
        }
        return max_el_rec(a, n-1);
    }
    
}

int max_el_rec2(int a[], int l, int r){
    if (l==r){
        return a[l];
    }else{
        if (a[l] > max_el_rec2(a, l+1, r)){
        return a[l];
        }
        return max_el_rec2(a, l+1, r);
    }
    
}

int main(void) {
    int a[9] = {2, 3, 4, 5, 80, 4, 25, 7, 6};
    printf("\niterative = %i  ", max_el(a));
    printf("\niterative_2 = %i  ", max_el_2(a));
    printf("\niterative_rec = %i  ", max_el_rec(a, N));   
    printf("\niterative_rec2 = %i  ", max_el_rec2(a, 0, N-1));   
    
    return 0;
}