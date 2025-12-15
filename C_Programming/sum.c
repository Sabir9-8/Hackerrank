#include <stdio.h>
//A program to calculate the sum of two integers within a specified range

int main() {

    int a,b;
    scanf("%d %d", &a, &b);
    if (a >= (-10000) && b <= (10000)) {
        int sum = a + b;
        printf("The sum of %d and %d is %d.\n",a,b,sum);
    }
    return 0;
}
