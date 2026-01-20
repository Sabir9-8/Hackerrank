#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int a[n - 1];
    
    for (int i = 0; i < n - 1; ++i) {
        scanf("%d", &a[i]);
    }
    long sum_n = (n * (n + 1)) / 2;
    long sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        sum += a[i];
    }
    
    int missing = sum_n - sum;
    
    printf("%d", missing);
    
    return 0;
}