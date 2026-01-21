#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    long sum = 0;
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    
    double avg = (double)sum / n;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > avg) {
            ++count;
        }
    }
    if (n >= 0) {
        printf("%d", count); 
    }
    
    
    return 0;
}
