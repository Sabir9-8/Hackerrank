#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int toSeconds(int hours, int minutes, int seconds) {
    int second;
    second = hours*3600 + minutes*60 + seconds;
    return second;
}

int main() {

    int hrs, mins, secs;
    scanf("%d %d %d", &hrs, &mins, &secs);
    int result;
    result = toSeconds(hrs, mins, secs);
    printf("Total seconds: %d\n", result);
    return 0;
}