#include <stdio.h>

int main() {

    int n, x;
    scanf("%d %d", &x, &n);
    double amount = x;
    double min_amount = x;
    double stop_limit = x * 0.4;
    double lucky_limit = x * 0.7;
    int flag = 0;
    int i;
    for (i=1; i<=n; ++i) {
        
        if (i % 6 == 0) {
            amount *= 1.7;
            if (i+7 <= n) {
                i += 6;
                continue;
            }
            else {
                break;
            }
            
        }
        else if (i%2 == 0) {
            amount *= (1.0 - 1.0/8.0);
        }
        else if (i%3 == 0) {
            amount *= (1.0 - 1.0/5.0);
        }
        else {
            amount *= 0.90;
        }
        if (amount < min_amount) {
            min_amount = amount;
        }
        if (stop_limit > amount){
            flag = 1;
            break;
        }
    }
    if (flag == 0 || i == n) {
        printf("After %d days: %.2f\n", n, amount);
    }
    else {
        printf("Stopped early after %d days: %.2f\n", i, amount);
    }
    printf("Minimum amount held by Bhaskar: %.2f\n", min_amount);
    if (lucky_limit < amount && !flag) {
        printf("Lucky Bhaskar\n");
    }
    else {
        printf("Better Luck Next Time!\n");
    }
    return 0;
}