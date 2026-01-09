#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d", &N);
    int a[7] = {0};
    int sum = 0;
    int x = N;
    for(int i=0;i<=6; ++i) {
        int y = x%10;
        x = x/10;
        a[i] = y;
        sum += a[i];
        if (x == 0) {
            break;
        }
    }
    if (N%sum == 0) {
        printf("%d is a harshad number", N);
    }
    else {
        printf("%d is not a harshad number", N);
    }
    return 0;
}
