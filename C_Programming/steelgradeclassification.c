#include <stdio.h>

int main() {

    int hard, tensile;
    float carbon;
    scanf("%d %f %d", &hard, &carbon, &tensile);
    if (hard > 50 && carbon < 0.7 && tensile > 5600) {
        printf("The grade of the steel is: 10\n");
        printf("All of the conditions met.\n");
    }
    else if (hard > 50 && carbon < 0.7) {
        printf("The grade of the steel is: 9\n");
        printf("Two conditions met.\n");
    }
    else if (carbon < 0.7 && tensile > 5600) {
        printf("The grade of the steel is: 8\n");
        printf("Two conditions met.\n");
    }
    else if (hard > 50 && tensile > 5600) {
        printf("The grade of the steel is: 7\n");
        printf("Two conditions met.\n");
    }
    else if (hard > 50 || carbon < 0.7 || tensile > 5600) {
        printf("The grade of the steel is: 6\n");
        printf("Only one condition met.\n");
    }
    else {
        printf("The grade of the steel is: 5\n");
        printf("None of the conditions met.\n");
    }
    return 0;
}