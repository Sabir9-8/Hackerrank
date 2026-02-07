#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int a, b, c;
    for (int i = 0; i < t; ++i) {
        scanf("%d %d %d", &a, &b, &c);
        if (a == b) {
            if (c % 2) {
                printf("First\n");
            }
            else {
                printf("Second\n");
            }
        }
        else if (a > b) {
            printf("First\n");
        }
        else {
            printf("Second\n");
        }
    }
    return 0;
}