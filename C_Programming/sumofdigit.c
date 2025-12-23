#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the code to calculate the sum of digits of a five-digit number.
int main() {
	
    int n;
    scanf("%d", &n);
    if (10000 <= n && n <= 99999) {
        int d1, d2, d3, d4, d5, sum;
        d5 = n / 10000;
        d4 = (n / 1000) % 10;
        d3 = (n/100) % 10;
        d2 = (n/10) % 10;
        d1 = n % 10;
        sum = d1+d2+d3+d4+d5;
        printf("%d", sum);
    }
    return 0;
}