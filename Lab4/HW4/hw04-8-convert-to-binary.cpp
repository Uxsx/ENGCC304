/*
    จงแปลงเลขฐาน 16 ที่รับมาจากผู้ใช้ให้กลายเป็นเลขฐาน 2
    
    Test case:
        User input :
            FB
    Output:
        11111011

    Test case:
        User input :
            19
    Output:
        11001
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printBinary(unsigned int n) {
    int started = 0 ;
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1 ;
        if (bit == 1) {
            started = 1 ;
        }
        if (started) {
            printf("%d", bit) ;
        }
    }
    // ถ้าไม่มีเลข 1 เลย (n = 0)
    if (!started) {
        printf("0") ;
    }
}

int main() {
    char hexInput[20] ;
    unsigned int decimalValue ;

    printf("User input : ") ;
    scanf("%s", hexInput) ;

    // แปลงจาก string (ฐาน 16) เป็นเลขฐาน 10
    decimalValue = (unsigned int)strtoul(hexInput, NULL, 16) ;

    // แสดงผลลัพธ์ฐาน 2
    printf("Output: ") ;
    printBinary(decimalValue) ;

    return 0 ;
}
