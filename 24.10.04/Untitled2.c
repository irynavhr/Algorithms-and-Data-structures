// Hrytsenko Iryna
#include <stdio.h>
#include <math.h>


int main(){
    int i, *pi, **ppi;

    i = 2;
    i+=3;
    printf("i = %i\n", i);

    pi = &i;
    *pi +=4;
    printf("i = %i\n", *pi);

    ppi = &pi;
    **ppi += 5;
    printf("i = %i\n", **ppi);
    printf("i = %i\n", i);

}
