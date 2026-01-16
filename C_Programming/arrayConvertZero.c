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

    int i;
    
    for (i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
        
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}
