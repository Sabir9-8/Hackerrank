#include <stdio.h>

int main() {
    
    int num;
    scanf("%d", &num);
    if (num % 6 == 0 && num % 5 != 0) {
        printf("A");
        return 0;
    }
    else if (num == 21 || num == 22 || num ==33 || num == 35 || num == 55 || num == 77) {
        printf("B");
        return 0;
    }
    else if ((10 <= num && num <= 99) && ((num % 3 == 0) ^ (num % 7 == 0))) {
        printf("C");
        return 0;
    }
    for ( int i = 1; i <= 14; ++i) {
        int square = i * i;
        if (square == num) {
            printf("D");
            return 0;
        }
    }
    {
        printf("E");
        return 0;
    }
}