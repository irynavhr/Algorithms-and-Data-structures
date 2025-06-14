// Hrytsenko Iryna
#include <stdio.h>
#include <math.h>
#define N 10



// функція друку масиву з n елементів, отримуємо масив
void print_array(int x[], int n){
    for (int i=0; i<n; i++){
        printf("%i  ", x[i]);
    }
    printf("\n");
}

// 1 функція заповнення масиву 0 --> 9, отримуємо масив
void init_arr_1(int x[], int n){
    for (int i = 0; i < N; i++){
        x[i] = i;
    }
}

// 2 функція заповнення масиву 1 --> 10, отримуємо масив
void init_arr_2(int x[], int n){
    for (int i = 0, j = 1; i<N; i++, j++){
        x[i] = j;
    }
}

// 3 функція заповнення масиву 0 --> 9, отримуємо масив
void init_arr_3(int x[], int n){
    int i = 0;
    while (i<n){
        x[i] = i;
        i++;
    }
}

// 4 функція заповнення масиву 0 --> 9, отримуємо масив
void init_arr_4(int x[], int n){
    int i = 0;
    do {
        x[i] = i;
        i++;
    }while (i < n);
}

// 5 функція заповнення масиву 9 --> 0, отримуємо масив
void init_arr_5(int x[], int n){
    for (int i = 9; i>=0; i--){
        x[n-i-1] = i;

    }
}


//POINTER
// &a[0] = a
// int *x = a
// x[i] =*(x + i)
// int x[] = int *x
//------------------
//  6 функція заповнення масиву 0 --> 9, отримуємо вказівник на першу комірку масиву
void init_arr_6(int *x, int n){
    for (int i = 0; i<N; i++){
        x[i] = i;
    }

}

//  7 функція заповнення масиву 9 --> 0, отримуємо вказівник на першу комірку масиву
void init_arr_7(int *x, int n){
    for (int i = 9; i>=0; i--){
        x[n-1-i] = i;
    }
}



//Чи можна обійтись без змінної p ?  --> ТАК!!!
void init_arr_8(int * x, int n){
    int *p, i;
    for (p=x, i=0; p<x+n; p++, i++){
        *p = i;
    }
}
void init_arr_8_0(int * x, int n){  // --> variant 1
    for (int i=0; i<n; x++, i++){
        *x = i;
    }
}
void init_arr_8_1(int * x, int n){  // --> variant 2
    x += 9;
    for (; n>0; n--, x--){
        *x = n-1;
    }
}
//                  see init_arr_6()   --> variant 3


int main(){
    int  a[N], i, j;

    init_arr_1(a, N);
    print_array(a, N);

    init_arr_2(a, N);
    print_array(a, N);

    init_arr_3(a, N);
    print_array(a, N);

    init_arr_4(a, N);
    print_array(a, N);

    init_arr_5(a, N);
    print_array(a, N);

    init_arr_6(a, N);
    print_array(a, N);

    init_arr_7(a, N);
    print_array(a, N);


    // у функції введено додаткову змінну
    printf("\nTask 8: \n");
    printf("Base variant: \n");
    init_arr_8(a, N);
    print_array(a, N);
    printf("Variant 1: \n");
    init_arr_8_0(a, N);
    print_array(a, N);
    printf("Variant 2: \n");
    init_arr_8_1(a, N);
    print_array(a, N);
    printf("Variant 3: \n");
    init_arr_6(a, N);
    print_array(a, N);

    // MASSIVE OF POINTERS
    // int * b[N], x, y, z;
    // b[0] = &x;
    // b[1] = &y;
    // b[2] = &z;

    // MATRIX / MASSIVE OF MASSIVES / POINTER ON MASSIVE OF POINTERS ON 1-st ELEMENT OF EACH MASSIVE
    // int c[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11}};
    // MATRIX:
    // 1  2  3  4       // a[1][2]  -->  7      a --> []
    // 5  6  7  8       // a[1]   -->  5
    // 9 10 11  0




    return 0;
}
