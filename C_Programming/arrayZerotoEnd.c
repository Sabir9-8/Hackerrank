#include <stdio.h>

void moveZerosToEnd(int arr[], int n) {
    // Implement your logic here
    int cond = n;
    for (int i = 0; i < cond;) {
        if (arr[i] == 0) {
            for (int j = i; j < n -1; ++j) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            --cond;
        }
        else {
            ++i;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    moveZerosToEnd(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}