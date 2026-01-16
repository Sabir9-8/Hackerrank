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
    int count = 0;
    
    for (i = 0; i < n; ++i) {
        if (target == arr[i]) {
            ++count;
        }
        
    }
    printf("%d", count);
    
    return 0;
}