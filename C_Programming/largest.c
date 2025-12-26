#include <stdio.h>

//It takes three number as input and tells which number is largest.

int largestNum(int num1, int num2, int num3) {
    int large;
    if (num1 > num2 && num1 > num3) {
        large = num1;
    }
    else if (num2 > num3 && num2 > num1) {
        large = num2;
    }
    else if (num3 > num1 && num3 > num2){
        large = num3;
    }
    return large;
}
int main() {

    int num1, num2, num3, result;
    scanf("%d %d %d", &num1, &num2, &num3);
    result = largestNum(num1, num2, num3);
    printf("The largest number is : %d", result);
    return 0;
}