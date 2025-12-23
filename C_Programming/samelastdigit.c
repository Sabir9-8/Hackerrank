#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the code to check if two numbers have the same last digit.
int main() {

    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if ( num1 >=0 && num1 <= 1000000000) {
        if (num2 >=0 && num2 <= 1000000000) {
            num1 = num1 % 10;
            num2 = num2 % 10;
            if (num1 == num2) {
                printf("YES");
            }
            else {
                printf("NO");
            }
        }
    }
    return 0;
}
