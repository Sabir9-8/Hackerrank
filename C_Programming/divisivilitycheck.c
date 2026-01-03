#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    for (int i=15; i <= n; i += 15) {
        printf("%d\n", i);
    }
    return 0;
}