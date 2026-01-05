#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    for (int i=1; i <= num; ++i) {
        if (i&1) {
            printf("%d ", i);
        }
        else {
            int res = -i;
            printf("%d ", res);
        }
    }
    return 0;
}