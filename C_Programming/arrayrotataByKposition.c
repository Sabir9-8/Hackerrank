#include <stdio.h>

// Function to rotate the array
void rotateArray(int arr[], int n, int k) {
    // Your implementation here
    k = k % n;
    if(k == 0) {
        return;
    }
    int a[k];
    for (int i = 0; i < k; ++i) {
        a[i] = arr[i];
    }
    int *ptr = arr;
    int j = 0;
    for (int i = 0; i < n; ++i) {
        if (i < n-k) {
            *(ptr + i) = arr[k+i];
        }
        else if (i >= n-k) {
            *(ptr + i) = a[j++];
            
        }
        
        /*int first = *ptr;
        for (int j = 0; j < n; ++j) {
            if (j == n-1) {
                *(ptr + n - 1) = first;
            }
            else {
                *(ptr + j) = arr[j+1];
            }
        }*/
    }
    
}


int main() {
    int n, k;
    // Reading input
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    // Call the function to rotate the array
    rotateArray(arr, n, k);
    
    // Print the rotated array
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}