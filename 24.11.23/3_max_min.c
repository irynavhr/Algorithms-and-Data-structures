// relise search of max and min
// qantity of porivnann != 2N, but = 1.5 N

// Hrytsenko Iryna  
#include <stdio.h>
#define N 11
void max_and_min(int a[], int n, int *min, int *max){
    int i;
    if(n%2==1){
        *min = a[0], 
        *max = a[0];
        i = 1;
    }else{
        if (a[0]<a[1]){
        *min = a[0], 
        *max = a[1];
        }else{
        *min = a[1], 
        *max = a[0];
        }
        i = 2;
    }
    for (; i<n; i+=2){
        if (a[i]<a[i+1]){
            if (a[i]<*min) *min = a[i];
            if (a[i+1]>*max) *max = a[i+1];
        }else{
            if (a[i+1]<*min) *min = a[i+1];
            if (a[i]>*max) *max = a[i];
        }
    }
}

int main(){
    // int arr[N] = {50, 2, 4, 8, 95, 3, 45, 1, 15, 191};
    int arr[N] = {50, 2, 4, 8, 95, 3, 45, 1, 15, 191, 0};
    int min, max;
    max_and_min(arr, N, &min, &max);
    printf("\nmin val = %i", min);
    printf("\nmin val = %i", max);
    return 0;
}