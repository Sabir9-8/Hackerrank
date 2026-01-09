#include <stdio.h>
#include <string.h>

int main() {

    int year, month;
    scanf("%d %d", &month, &year);
    int leapyear;
    
    if (year > 0 && ((year % 100 != 0 && year % 4 == 0) || (year % 400 == 0))){
        leapyear = 1;
    }
    else if (year > 0) {
        leapyear = 0;
    }
    else {
        leapyear = -1;
    }
    switch(month) {
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10:
        case 12: 
            if (year<=0) {
                printf("Invalid Year");
            }
            else {
                printf("31");
            }
            break;
        case 4 :
        case 6 :
        case 9 :
        case 11: 
            if (year<=0) {
                printf("Invalid Year");
            }
            else {
                printf("30");
            }
            break;
        case 2 : 
            switch(leapyear) {
                case 1 : 
                    printf("29");
                    break;
                case 0 : 
                    printf("28");
                    break;
                case -1 : 
                    printf("Invalid Year");
                    break;
        }
            break;
        default: 
            if (year <= 0) {
                printf("Invalid Month\n");
                printf("Invalid Year");
            }
            else {
                printf("Invalid Month");
            }
            break;
    }
    
    return 0;
}