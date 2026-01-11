#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long int N;
    scanf("%ld", &N);
    if (N < -2147483648 || N > 2147483647) {
        printf("Out of Range");
    }
    else if(((N >> 2) << 2) == N){
        printf("Divisible");
    }
    else {
        printf("Not Divisible");
    }
    return 0;
}
