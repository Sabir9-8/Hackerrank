#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int arr[n];
    int target_sum;
    int i;
    int j = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target_sum);
    for (i = 0; i < n; i++){
        
        for (j = i + 1; j < n; ++j) {
            if (arr[i] + arr[j] == target_sum) {
                
                printf("%d %d", arr[i], arr[j]);
                return 0;
            }
        }
    }
    if (i == n) {
        printf("-1");
    }
    
    
    return 0;
}