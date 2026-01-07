#include <stdio.h>
#include <math.h>
int main() {

    int n;
    scanf("%d", &n);

    for (int i=0; i<=n-1; ++i) {
        if (n==1) {
            printf("<%.0f>", pow(2, i));
        }
        else if (i==0) {
            printf("<%0.f ", pow(2, i));
        }
        else if (i == n-1) {
            printf("%.0f>", pow(2, i));
        }
        else {
            printf("%.0f ", pow(2, i));
        }
    }
    return 0;
}