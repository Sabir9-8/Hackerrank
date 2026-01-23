#include <stdio.h>
#include <stdlib.h>
/**
 * Finds the kth smallest element in the array by iteratively finding the next
 * minimum.
 * @param arr: The input array.
 * @param n: The number of elements in the array.
 * @param k: The order of the smallest element to find (1-indexed).
 * @return: The kth smallest element in the array.
 */

int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int kthSmallest(int arr[], int n, int k) {
  // Write your code here

    qsort(arr, n, sizeof(int), compare);
    int unique = 1;
    int min = arr[0];
    
    if (k == 1) return arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] != arr[i-1]) {
            ++unique;
            min = arr[i];
        }
        if (unique == k) {
            return min;
        }
    }
    return -1;
}

int main() {
  int n, k;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &k);
  printf("%d\n", kthSmallest(arr, n, k));

  return 0;
}