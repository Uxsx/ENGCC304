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

    // แสดงผล Index
    printf("Index: ") ;
    for (int i = 0; i < n; i++) {
        printf("%3d", i) ;
    }
    printf("\n") ;

    // แสดงผล Array (จำนวนเฉพาะหรือ #)
    printf("Array:") ;
    for (int i = 0; i < n; i++) {
        int num = arr[i] ;
        int isPrime = 1 ; 

        if (num < 2) {
            isPrime = 0 ;
        } else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = 0 ;
                    break ;
                }
            }
        }

        if (isPrime) {
            printf(" %3d", num) ;
        } else {
            printf("  #") ;
        }
    }
    printf("\n") ;

    return 0 ;
}
