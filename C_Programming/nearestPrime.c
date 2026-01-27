#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    if (n == 1) {
        printf("2");
        return 0;
    }
    int i = 2;
    int j = 3;
    int prime1 = 2;
    int prime2 = 3;
    while(1) {
        int prime_i = i;
        int prime_j = j;
        for (int k = 2; k * k <= j; ++k) {
            
            if(i % k == 0) {
                prime_i = 0;
                
            }
            if (j % k == 0) {
                prime_j = 0;
                
            }
            if(prime_i == 0 && prime_j == 0) {
                break;
            }
            
        }
        
        if (prime_i) {
            prime1 = prime_i;
        }
        
        if (prime_j) {
            prime2 = prime_j;
        }
        if (prime1 == n || prime2 == n) {
            printf("%d", n);
            return 0;
        }
        if (n > prime1 && n < prime2) {
            if(prime2 - n >= n - prime1) {
                printf("%d", prime1);
                return 0;
            }
            else {
                printf("%d", prime2);
                return 0;
            }
        }
        
        ++j;
        ++i;
    }
    return 0;
}