#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float num;
    scanf("%f", &num);
    float halfvalue = num / 2;
    printf("Half of %.0f is %.2f\n", num, halfvalue);
    return 0;
}
