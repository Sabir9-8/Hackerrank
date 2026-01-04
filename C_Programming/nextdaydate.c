#include <stdio.h>


int main() {

    int day, month, year;
    scanf("%d %d %d", &day, &month, &year);
        
    if (month == 2) {
        if (year % 400 == 0) {
            if (day == 29) {
                day = 1;
                month = 3;
            }
            else {
                day += 1;
            }
        }
        else if (year % 100 != 0 && year % 4 == 0) {
            if (day == 29) {
                day = 1;
                month = 3;
            }
            else {
                day += 1;
            }
        }
        else {
            if (day == 28) {
                day = 1;
                month = 3;
            }
            else {
                day += 1;
            }
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day == 30) {
            day = 1;
            month += 1;
        }
        else {
            day += 1;
        }
    }
    else if (month == 12) {
        if (day == 31) {
            day = 1;
            month = 1;
            year += 1;
        }
        else {
            day += 1;
        }
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) {
        if (day == 31) {
            day = 1;
            month += 1;
        }
        else {
            day += 1;
        }
    }
    if (month < 10) {
        if (day < 10) {
            printf("0%d-0%d-%d", day, month, year);
        }
        else {
            printf("%d-0%d-%d", day, month, year);
        }
    }
    else {
        if (day < 10) {
            printf("0%d-%d-%d", day, month, year);
        }
        else {
            printf("%d-%d-%d", day, month, year);
        }
    }    
    return 0;
}
