#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    int m;
    scanf("%d", &m);
    int b[m];
    if (m != n) {
        printf("Not Equal");
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        scanf("%d", &b[i]);
    }
    int j;
    for (j = 0; j < n; ++j) {
        if (a[j] == b[j]) {
            continue;
        }
        else {
            break;
        }
    }
    if (j == n) {
        printf("Equal");
    }
    else {
        printf("Not Equal");
    }
    
    
    return 0;
}
