#include <stdio.h>

int main() {
    float h, w, a ;

    printf("H = ") ;
    scanf("%f", &h) ;

    printf("W = ") ;
    scanf("%f", &w) ;

    a = (w * h) / 2 ;

    printf("Area = %.1f\n", a) ;

    return 0 ;
}
