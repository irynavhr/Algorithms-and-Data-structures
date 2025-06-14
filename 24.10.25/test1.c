// Hrytsenko Iryna
#include <stdio.h>
#include <stdlib.h> //malloc  //free

int main(){
    int i = 3;                             //
    float f = 3.14;                         //  same capability
    char str[4] = {'a', 'b', 'c', 'd'};     //

    // int *pi = &i;
    float *pf = &f;
    char *pc = &str[0]; // &str

    // WITH MALLOC()    
    int *pi;
    pi = (int *)malloc(10*sizeof(int));
    for (int i = 0; i<10; i++){
        pi[i] = i*10;
        //*(pi + i) = i;
    }

    free(pi);// звільнення пам'яті

    return 0;
}