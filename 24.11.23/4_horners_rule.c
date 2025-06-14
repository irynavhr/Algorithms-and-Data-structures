//        n-1                1
// a   * x     + ... +  a * x
//  n-1                  1

// aproximation

//  (((2x + 3)x + 4)x + 5)x + 6  = 2x^4 + 3x^3 + 4x^2 + 5x + 6

// Hrytsenko Iryna                        
#include <stdio.h>

#define N 5

float hornor_iterative(float a[], int n, float x){
    float my_x = 1;
    float res = 0;
    for (int i = 0; i<n; i++){
        res+= a[i]*my_x;
        my_x *= x;
    }
    return res;
}

float hornor_iterative2(float a[], int n, float x){
    float res = 0;
    for (int i = n-1; i>=0; i--){
        res = res*x + a[i];    }
    return res;
}

float honor_rec(float a[], int n, float x){
    if (n == 0){
        return 0;
    }
    return honor_rec(a, n-1, x) * x + a[N-n];
}

float honor_rec(float a[], int n, float x){       // relise with left and right limit
    if (n == 0){
        return 0;
    }
    return honor_rec(a, n-1, x) * x + a[N-n];
}

int main(void) {
    float a[9] = {6, 5, 4, 3, 2};
    float x = 2;

    printf("\nhornor_iterative = %f  ", hornor_iterative(a, N, x));
    printf("\nhornor_iterative2 = %f  ", hornor_iterative2(a, N, x)); 
    printf("\nhonor_rec = %f  ", honor_rec(a, N, x)); 
    
    return 0;
}