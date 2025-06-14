// Hrytsenko Iryna
#include <stdio.h>
#include <math.h>

void swap(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(){

    int a = 2, b = 5;

    swap(&a, &b);
    printf("x = %i\n", a);
    printf("y = %i\n", b);

    return 0;

}

