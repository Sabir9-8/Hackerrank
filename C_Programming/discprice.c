#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Function to calculate discounted price
float discounted(float price, float percent) {
    float disc_amount, final_price;
    disc_amount = (price * percent) / 100;
    final_price = price - disc_amount;
    return final_price;
}
int main() {

    float price, disc;
    scanf("%f %f", &price, &disc);
    float res = discounted(price, disc);
    printf("The final price is: %f", res);
    return 0;
}
