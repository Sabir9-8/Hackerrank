
#include <stdio.h>

void sort(int a[], int size) {
    for (int i=0; i < size-1; ++i) {
        for (int j=0; j < size-1; ++j) {
            
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for (int i=0; i< size ; ++i) {
        printf("%d ", a[i]);
    }
}


int main()
{
    int arr[10];
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
    sort(arr, size);
    return 0;
}