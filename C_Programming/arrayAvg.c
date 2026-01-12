#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int arr[n];
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    double avg = sum / n;
    if (n > 0) {
        printf("%f", avg);
    }
    
    return 0;
}
