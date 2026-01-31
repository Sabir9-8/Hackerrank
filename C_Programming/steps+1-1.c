#include <stdio.h>
#include <stdlib.h>

void solve() {
    int n, s;
    scanf("%d %d", &n, &s);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < n; ++i) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    int step = 0;
    if (max == min) {
        step = abs(s - max);
    }
    else if (s < min) {
        step = max - s;
    }
    else if ( s > max) {
        step = s - min;
    }
    else if (max - s <= s - min) {
        step = max - s + max - min;
    }
    else {
        step = s - min + max - min;
    }
    printf("%d", step);
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}