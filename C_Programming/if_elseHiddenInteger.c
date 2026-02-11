#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int n, k, x;
    for (int i = 0; i < t; ++i) {
        scanf("%d %d %d", &n, &k, &x);
        if (k == 1) {
            printf("NO\n");
        }
        else if (k == 2) {
            if (x == 1) {
                if (n % 2 == 0) {
                   printf("YES\n");
                   printf("%d\n", n / 2);
                   for (int i = 0; i < n / 2; ++i) {
                       if (i == n/ 2 - 1) {
                           printf("2\n");
                       }
                       else {
                           printf("2 ");
                       }
                   }
                }
                else {
                    printf("NO\n");
                }
            }
            else {
                printf("YES\n");
                printf("%d\n", n);
                for (int i = 0; i < n; ++i) {
                   if (i == n - 1) {
                       printf("1\n");
                   }
                   else {
                       printf("1 ");
                   }
                }
            }
        }
        else if (k >= 3) {
            printf("YES\n");
            if (x == 1) {
                printf("%d\n", n / 2);
                if (n % 2 == 0) {
                   for (int i = 0; i < n / 2; ++i) {
                       if (i == n/ 2 - 1) {
                           printf("2\n");
                       }
                       else {
                           printf("2 ");
                       }
                   }
                }
                else {
                   for (int i = 0; i < n / 2; ++i) {
                       if (i == n/ 2 - 1) {
                           printf("3\n");
                       }
                       else {
                           printf("2 ");
                       }
                   }
                }
            }
            else {
                printf("%d\n", n);
                for (int i = 0; i < n; ++i) {
                   if (i == n - 1) {
                       printf("1\n");
                   }
                   else {
                       printf("1 ");
                   }
                }
            }
        }
    }
    return 0;
}