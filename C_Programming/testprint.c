#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Function to read and print different data types
int main() {
    int num1;
    long num2;
    float num3;
    double num4;
    char ch1;
    scanf("%d %ld %c %f %lf", &num1, &num2, &ch1, &num3, &num4);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", num1, num2, ch1, num3, num4);
    return 0;
}
