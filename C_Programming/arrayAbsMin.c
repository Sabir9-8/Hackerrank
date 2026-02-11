#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    int min = abs(arr[0]);
    for (int i = 0; i < n; ++i) {
        if (min > abs(arr[i])) {
              min = abs(arr[i]);
        }
    }
    printf("%d", min);
    return 0;
}