#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int n;
    for (int i = 0; i < t; ++i) {
        scanf("%d", &n);
        int arr[n];
        for (int j = 0; j < n; ++j) {
            scanf("%d", &arr[j]);
        }
        int sorted = 1;
        for (int k = 0; k < n - 1; ++k) {
            if (arr[k] > arr[k+1]) {
                sorted = 0;
                break;               
            }
        }
        if (sorted) {
            int min_dist = arr[1] - arr[0];
            for (int j = 1; j < n - 1; ++j) {
                if (min_dist > arr[j+1] - arr[j]) {
                    min_dist = arr[j+1] - arr[j];
                }
            }
            printf("%d\n", (min_dist / 2) + 1);
        }
        else {
            printf("0\n");
        }
    }
    return 0;
}