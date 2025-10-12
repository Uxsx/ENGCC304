#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = 0;

    // หาจำนวนหลัก
    for (int n = num; n > 0; n /= 10)
        digits++;

    // คำนวณผลรวมกำลังของแต่ละหลัก
    for (; num > 0; num /= 10) {
        int digit = num % 10;
        sum += pow(digit, digits);
    }

    return (sum == original);
}

int main() {
    int num;

    printf("Enter Number:\n");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("Pass.\n");
    else
        printf("Not Pass.\n");

    return 0;
}
