#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the code to read two integers and two floating-point numbers, then print their sums and differences.
int main()
{
	int num1, num2;
    float flt1, flt2;
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &flt1, &flt2);
    int sum1 = num1 + num2;
    int diff1 = num1 - num2;
    float sum2 = flt1 + flt2;
    float diff2 = flt1 - flt2;
    printf("The sum and difference is %d and %d respectively.\n", sum1, diff1);
    printf("The sum and difference is %.1f and %.1f respectively.", sum2, diff2);
    return 0;
}