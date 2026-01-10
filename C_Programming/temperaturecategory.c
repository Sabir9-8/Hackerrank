#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d", &t);
    if (t < 0) {
        printf("Freezing");
    }
    else if (t >= 0 && t <= 30) {
        printf("Normal");
    }
    else {
        printf("Hot");
    }
    return 0;
}
