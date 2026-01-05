#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d", &N);
    int flag = 0;
    if (N<=1) {
        printf("None");
    }
    else {
        for (int i=2; i*i<=N; ++i) {
            if (N%i == 0) {
                printf("Composite");
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("Prime");
        }
    }
    return 0;
}
