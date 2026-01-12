#include <stdio.h>

int nth_prime(int n) {
    
    int res;
    int count = 0;
    for (int i = 2; ; ++i) {
        int flag = 0;
        for (int j = 2; j*j <= i; ++j) {
            if (i % j == 0) {
                flag =1;
                break;
            }
        }
        if (flag == 1) {
            continue;
        }
        res = i;
        ++count;
        if (count == n) {
            break;
        }
    }
    return res;
}
int main() {

    int n;
    scanf("%d", &n);
    int res = nth_prime(n);
    printf("%d", res);
    return 0;
}