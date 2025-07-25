#include <stdio.h>

int main() {
    char Name[50];
    char LastName[50];

    printf("Enter your name: ") ;
    scanf("%s", Name) ;
    printf("Enter your lastname: ") ;
    scanf("%s", LastName) ;

    printf("%s %s TC, RMUTL, Chiang Mai, Thailand\n", Name, LastName) ;
    return 0 ;
}
