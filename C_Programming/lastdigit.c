#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// This program calculates the sum of the last digits of two given non-negative integers.
int sumLastDigits(int a, int b) {
    int result = a + b;
    return result;
}
int main() {
    int num1, num2, d1, d2, sum;
    scanf("%d %d", &num1, &num2);
    if (num1 >= 0 && num2 <= 1000000000) {
        d1 = num1 % 10;
        d2 = num2 % 10;
        sum = sumLastDigits(d1, d2);
        printf("The sum of last digits is: %d\n", sum);
    }  
    return 0;
}