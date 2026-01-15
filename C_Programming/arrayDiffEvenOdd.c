#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    long even_sum = 0;
    long odd_sum = 0;
    for (int i = 0; i < n; ++i) {
        if (i & 1) {
            odd_sum += arr[i];
        }
        else {
            even_sum += arr[i];
        }
    }
    printf("%ld", even_sum - odd_sum);

    return 0;
}
