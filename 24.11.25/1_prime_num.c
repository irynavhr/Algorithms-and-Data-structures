#include <stdio.h>

#define N 100

int is_it_prime(int n){
    for (int i = 2; i*i<=n; i++){
        if (n%i == 0){
            return 0;
        }
    }
    return 1;
}

void SieveOfEratosthenes(int n, int a[]){
    // all true
    for (int i = 0; i<n; i++){
        a[i] = 1;
    }
    // mark that not prime by counting 2(i+1) + n*(i+1)
    for (int i = 1; i<n; i++){
        if (is_it_prime(i+1)){
            for(int j = i+i+1; j<n; j+=i+1){
                a[j] = 0;
            }
        }
    }
    // printing
    for (int i = 1; i<n; i++){
        if(a[i]) printf("%i\t", i+1);
    }
}

// different indicsation
void SieveOfEratosthenes2(int n, int a[]){  
    // all true
    for (int i = 2; i<n; i++){
        a[i] = 1;
    }
    // mark that not prime by counting i^2 + n*i
    for (int i = 2; i*i<n; i++){
        if (is_it_prime(i)){
            for(int j = i*i; j<n; j+=i){
                a[j] = 0;
            }
        }
    }
    // printing
    for (int i = 2; i<n; i++){
        if(a[i]) printf("%i\t", i);
    }
}


int main(){
    // printf("Is_prime: %i\n", is_it_prime(17));
    // printf("Is_prime: %i\n", is_it_prime(18));
    // printf("Is_prime: %i\n", is_it_prime(1024));
    // printf("Is_prime: %i\n", is_it_prime(101));
    // printf("Is_prime: %i\n", is_it_prime(2017));

    int a[N];
    SieveOfEratosthenes(N, a);
    printf("\n");
    int b[N+1];
    SieveOfEratosthenes2(N+1, b);
}