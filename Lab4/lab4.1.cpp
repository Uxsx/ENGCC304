#include <stdio.h>

int main() {
    int day, sec ;

    printf("Input Days : ");
    scanf("%d", &day) ;

    sec = day * 24 * 60 * 60 ;
    
    printf("%d days = %d seconds", day, sec) ;

    return 0 ;
}