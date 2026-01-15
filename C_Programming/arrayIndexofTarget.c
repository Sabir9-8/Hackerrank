#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i=0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    int target;
    scanf("%d", &target);

    int i;
    for (i = 0; i < n; ++i) {
        if (target == arr[i]) {
            break;
        }
        
    }
    if (i == n) {
        printf("-1");
    }
    else {
        printf("%d", i);
    }

    return 0;
}