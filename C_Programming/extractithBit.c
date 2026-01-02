#include <stdio.h>

int main() {

    int num, i;
    scanf("%d %d", &num, &i);
    if ((num & (1<<i)) == 0) {
        printf("0");
    }
    else {
        printf("1");
    }
    return 0;
}