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
    int asc = 1;
    int des = 1;
    for (int i = 0; i < n - 1; ++i) {

        if (a[i] > a[i+1]) {
            asc = 0;
        }
        if (a[i] < a[i+1]) {
            des = 0;
        }
        if (asc == 0 && des == 0) {
            break;
        }
        
    }
    if (asc) {
        printf("Ascending");
    }
    else if (des){
        printf("Descending");
    }
    else {
        printf("Not Sorted");
    }
    
    return 0;
}
