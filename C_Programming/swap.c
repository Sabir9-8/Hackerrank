#include <stdio.h>

//It takes two number as input and swap them.

int main() {

    int a, b;
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d\nb = %d", a, b);
    return 0;
}