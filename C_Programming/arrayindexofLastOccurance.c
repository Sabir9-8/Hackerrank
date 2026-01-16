#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i=0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    int K;
    scanf("%d", &K);

    int i;
    int index = -1;
    
    for (i = 0; i < n; ++i) {
        if (K == arr[i]) {
            index = i;
        }
        
    }
    
    printf("%d", index);

    return 0;
}
