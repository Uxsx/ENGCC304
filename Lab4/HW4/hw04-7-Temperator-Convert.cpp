/*
    จงเขียนโปรแกรมเพื่อแปลงอุณหภูมิ โดยรับมาจากผู้ใช้เป็นองศาเซลเซียส และแปลงเป็นฟาเรนไฮต์
    
    Test case:
        User input :
            22
    Output:
        22 degree Celsius = 71.6 degree Fahrenheit

    Test case:
        User input :
            36
    Output:
        36 degree Celsius = 96.8 degree Fahrenheit
*/
#include <stdio.h>

int main () {
    int cel ;

    printf("Input Celsius : ") ;
    scanf("%d", &cel) ;

    float fah = (cel * 9.0) / 5.0 + 32.0;
    printf("%d degree Celsius = %.1f degree Fahrenheit", cel, fah) ;
}