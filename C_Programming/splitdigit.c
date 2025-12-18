#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void split(int n) {
    int d1, d2, d3;
    d1 = n % 10;
    d2 = (n / 10) % 10;
    d3 = n / 100;
    printf("%d %d %d\n", d3, d2, d1);
}
int main() {
    int num;
    scanf("%d", &num);
    split(num);
    return 0;
}
