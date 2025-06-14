// Hrytsenko Iryna
#include <stdio.h>
#include <math.h>


int main(){

    int x = 2, y = 5;
    x += y;
    y = x - y;
    x -= y;
    printf("x = %i\n", x);
    printf("y = %i\n", y);

    return 0;

}
