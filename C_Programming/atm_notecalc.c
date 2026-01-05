#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A;
    scanf("%d", &A);
    int a=0;
    int b=0;
    int c=0;
    if (A >= 100) {
        for (int i=100; i<=A; i +=100) {
            if (i % 500 == 0) {
                ++a;
            }
        }
        for (int i=100; i <= A - (500*a); i +=100) {
            if (i % 200 == 0) {
                ++b;
            }
        }
        for (int i=100; i <= A - (500*a) - (200*b); i +=100) {
            ++c;
        }
        printf("500-rupee notes: %d\n", a);
        printf("200-rupee notes: %d\n", b);
        printf("100-rupee notes: %d\n", c);
    }
    else {
        printf("Invalid amount");
    }
    return 0;
}
