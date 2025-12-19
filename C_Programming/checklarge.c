#include <stdio.h>
// Function to find the largest of four numbers
int max_of_four(int a, int b, int c, int d) {
    int large;
    if (a>b && a>c && a>d) {
        large = a;
    }
    else if (b>a && b>c && b>d) {
        large = b;
    }
    else if (c>a && c>b && c>d) {
        large = c;
    }
    else if (d>a && d>c && d>b) {
        large = d;
    }
    return large;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("The largest number is: %d\n", ans);

    return 0;
}