#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    for (n; n >= 1; ) {
        if (n==1) {
            printf("%d", n);
            break;
        }
        else if (n&1) {
            printf("%d -> ", n);
            n = 3*n + 1;
        }
        else {
            printf("%d -> ", n);
            n = n/2;
        }
    }
    return 0;
}