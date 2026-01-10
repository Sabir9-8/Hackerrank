#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num;
    scanf("%d", &num);
    int x = num;
    int count = 0;
    while (1) {
        int d = num % 10;
        if (x % d == 0) {
            ++count;
        }
        num = num / 10;
        if (num == 0) {
            break;
        }
    }
    printf("%d", count);
    return 0;
}
