#include <stdio.h>

//It takes number of electricity unit consumption and returns the bill amount to pay.

int main() {

    int unit;
    scanf("%d", &unit);
    float bill;
    if (0 <= unit && unit <= 1000000) {
        if (unit <= 100) {
            bill = unit * 5;
        }
        else if (unit <= 300) {
            bill = (unit - 100) * 7 + 500;
        }
        else if (unit > 300) {
            bill = (unit - 300) * 10 + 1900;
        }
        if (bill <= 1200) {
            float disc_price = bill - (bill * 0.1);
            printf("The electricity bill is: %.2f.", disc_price);
        }
        else {
            printf("The electricity bill is: %.2f.", bill);
        }
    }
    else {
        printf("Invalid Input!");
    }
    return 0;
}