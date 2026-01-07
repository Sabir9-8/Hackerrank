/*#include <stdio.h>

int main() {

    int n, x;
    scanf("%d %d", &n, &x);
    for (int i=1; i<=n; ++i) {
        printf("%d ", i*x);
    }
    return 0;
}*/
#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    for (int i=1; i <=10; ++i) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}