#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);
    for (int i=1; i<=N; ++i) {
        if (i%3 == 0) {
            ++N;
        }
        else {
            printf("%d ", i*i);
        }
    }
    return 0;
}