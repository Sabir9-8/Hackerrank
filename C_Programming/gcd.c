#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A, B;
    scanf("%d %d", &A, &B);
    int limit, gcd;
    
    if (A >= B) {
        limit = A;
    }
    else {
        limit = B;
    }
    for (int i=1; i <= limit; ++i) {
        if (A % i == 0 && B % i == 0) {
            gcd = i;
        }
    }
    printf("%d", gcd);
    return 0;
}
