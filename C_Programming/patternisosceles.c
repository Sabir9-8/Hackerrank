#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    if (n<=1) {
        printf("Shape Not Possible");
    }
    else {
        for (int i=1; i<=n ; ++i) {
            for (int k=2; k<=n-i+1; ++k) {
                printf(" ");
            }
            for (int j=1; j<=2*i - 1; ++j) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}