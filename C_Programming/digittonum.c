#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Function to build the number and multiply by 5
int buildNumber(int a, int b, int c, int d) {
    int num = (a * 1000 + b * 100 + c * 10 + d) * 5;
    return num;
}
int main() {
    int n1, n2, n3, n4, result;
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    result = buildNumber(n1, n2, n3, n4);
    printf("The number is: %d\n", result);
    return 0;
}
