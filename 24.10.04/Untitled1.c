// Hrytsenko Iryna
#include <stdio.h>
#include <math.h>


int main(){
    int i, *pi;
    float f, *fi;
    char c, *pc;
    i = 2;
    i+= 3;
    printf("i = %i\n", i);

    pi = &i;
    *pi += 2;
    printf("i = %p\n", pi);
    printf("i = %i\n", *pi);
    printf("i = %i\n", i);


    //
    f = 3.14;
    f*=2;
    printf("f = %f\n", f);
    fi = &f;
    *fi *= 2;
    printf("f = %p\n", fi);
    printf("f = %f\n", *fi);
    printf("f = %f\n", f);


    //ASCII
    c = 'h';
    printf("c = %c\n", c);
    pc = &c;
    *pc = 'a';
    printf("c = %p\n", pc);
    printf("c = %c\n", *pc); // if  %c for char == char for the code in ASCII
    *pc += 5;
    printf("f = %d\n", c); // if  %d for char == code in ASCII



    return 0;
}

