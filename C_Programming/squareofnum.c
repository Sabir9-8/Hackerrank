#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    for (int i=1; i <= num; ++i) {
        int res = i*i;
        printf("%d ", res);
    }
    return 0;
}