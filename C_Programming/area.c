#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// This program calculates the area of a rectangle given its length and width.
int area(int length, int width) {
    int area = length * width;
    return area;
}
int main() {
    int num1, num2, result;
    scanf("%d %d", &num1, &num2);
    result = area(num1, num2);
    printf("The area is: %d units", result);
    return 0;
}
