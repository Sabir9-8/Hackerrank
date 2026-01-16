#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int x = n;
    int place = 1;
    int binary = 0;
    while (n > 0) {
        int digit = n % 2;
        binary = binary + (digit * place);
        place *= 10;
        n /= 2;
    }
    printf("Binary equivalent of %d: %d", x, binary);
    return 0;
}