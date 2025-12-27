#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    if (n >= 1) {    
        if (n > 15 && n % 42 == 0) {
            printf("The verdict for the number %d is: SUPERNATURAL\n", n);
        }
        else if (n > 15 && (n % 6 == 0 || n % 21 == 0)) {
            printf("The verdict for the number %d is: MIRACULOUS\n", n);
        }
        else if (n > 10 && n % 14 ==0) {
            printf("The verdict for the number %d is: MIRACULOUS\n", n);
        }
        else if (n > 10 && n % 2 == 0) {
            printf("The verdict for the number %d is: MAGICAL\n", n);
        }
        else if (n > 15 && n % 3 == 0) {
            printf("The verdict for the number %d is: MAGICAL\n", n);
        }
        else if (n % 7 == 0) {
            printf("The verdict for the number %d is: MAGICAL\n", n);
        }
        else if (!(n > 15 && n % 42 == 0)) {
            printf("The verdict for the number %d is: NORMAL\n", n);
        }
    }
    else {
        printf("The verdict for the number %d is: INVALID\n", n);
    }
    return 0;
}