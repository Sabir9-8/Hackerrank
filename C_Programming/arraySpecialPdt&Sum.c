#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sortInteger(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;
    if (x - y > 0) return 1;
    else if (x - y < 0) return -1;
    return 0;
}

char* check_special_condition(int arr_count, int* arr) {
    qsort(arr, arr_count, sizeof(int), sortInteger);
    int smallest = arr[0];
    int largest = arr[arr_count-1];
    int second_smallest = smallest;
    int second_largest = largest;
    for (int i = 0; i < arr_count; ++i) {
        if (arr[i] != arr[i+1]) {
            second_smallest = arr[i+1];
            break;
        }
    }
    for (int j = arr_count - 1; j > 0; --j) {
        if (arr[j] != arr[j-1]) {
            second_largest = arr[j-1];
            break;
        }
    }
    char* s = malloc(10 * sizeof(char));
    if ((second_largest*smallest) > (second_smallest + largest)) {
        s = "True";
    }
    else {
        s = "False";
    }
    return s;
}

int main()
{
    int N; scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }
    char* result = check_special_condition(N, arr);
    printf("%s", result);
    return 0;
}
