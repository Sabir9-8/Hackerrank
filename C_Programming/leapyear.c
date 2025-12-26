#include <stdio.h>

//It takes an year as input and tells, is it a leap year or not.

int main() {

    int year;
    scanf("%d", &year);
    if (year > 0) {
        if (year % 400 ==0) {
            printf("Yes, %d is a leap year.", year);
        }
        else if (year % 100 == 0) {
            printf("No, %d is not a leap year.", year);
        }
        else if (year % 4 == 0) {
            printf("Yes, %d is a leap year.", year);
        }
        else {
            printf("No, %d is not a leap year.", year);
        }
    }
    else {
        printf("The given year %d is Invalid year.", year);
    }
    return 0;
}