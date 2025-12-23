#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the code to convert 24-hour format to 12-hour format with AM/PM.
int main() {

    int hr, min;
    scanf("%d %d", &hr, &min);
    if (0 <= hr && hr <= 23) {
        if (0 <= min && min <= 59) {
            if (hr == 00) {
                hr = 12;
                if (min >=0 && min <= 9) {
                    printf("%d:0%d AM", hr, min);
                }
                else {
                    printf("%d:%d AM", hr, min);
                }
            }
            else if (hr > 00 && hr < 12) {
                if (min >=0 && min <= 9) {
                    printf("%d:0%d AM", hr, min);
                }
                else {
                    printf("%d:%d AM", hr, min);
                }
            }
            else if (hr == 12){
                if (min >=0 && min <= 9) {
                    printf("%d:0%d PM", hr, min);
                }
                else {
                    printf("%d:%d PM", hr, min);
                }
            }
            else if (hr > 12 && hr <=23) {
                hr = hr - 12;
                if (min >=0 && min <= 9) {
                    printf("%d:0%d PM", hr, min);
                }
                else {
                    printf("%d:%d PM", hr, min);
                }
            }
        }
    }
    return 0;
}
