// Hrytsenko Iryna
#include <stdio.h>
#include <math.h>

int perimetr(int *x, int *y, int *z){
    return *x + *y + *z;
}
double square(int *x, int *y, int *z){
    float pp = (*x + *y + *z)/2.0;
    return sqrt(pp*(pp-*x)*(pp-*y)*(pp-*x));
}
 void p_s(int *x, int *y, int *z, int *p, double *s){
    *p = *x + *y + *z;
    float pp = (*x + *y + *z)/2.0;
    *s = sqrt(pp*(pp-*x)*(pp-*y)*(pp-*x));
 }

int main(){
    int a = 2, b = 5, c = 4, p;
    double s;

    // ˜˜˜˜˜˜˜˜
    p = perimetr(&a, &b, &c);
    printf("p = %i\n", p);

    //˜˜˜˜˜
    s = square(&a, &b, &c);
    printf("s = %f\n", s);

    //
    int printer;
    double square;
    p_s(&a, &b, &c, &printer, &square);
    printf("perimeter = %i\nsquare = %f\n", printer, square);

    return 0;

}
