#include <stdio.h>

int main() {
    int n;
    printf("Enter N : ") ;
    scanf("%d", &n) ;

    int arr[n] ;

    for (int i = 0; i < n; i++) {
        printf("Enter value[%d] : ", i) ;
        scanf("%d", &arr[i]) ;
    }

    printf("Index: ") ;
    for (int i = 0; i < n; i++) {
        printf("%3d", i) ;
    }
    printf("\n") ;

    printf("Array:") ;
    for (int i = 0; i < n; i++) {
        int num = arr[i] ;
        int isPrime = true; 

        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                isPrime = false ;   
                break;  
            }
        }

        if (isPrime == true) {
            printf(" %3d", num) ;
        } else {
            printf(" #") ;
        }
    }

    return 0 ;
}
