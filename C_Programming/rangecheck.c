#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Function to check if a number is within a specified range
int main() {

    int n, low, high;
    scanf("%d %d %d", &n, &low, &high);
    if (n >= -1000000000 && n <= 1000000000){
        if (low >= -1000000000 && low <= 1000000000) {
            if (high >= -1000000000 && high <= 1000000000) {
                if (n >= low && n <= high) {
                    printf("In Range");
                }
                else {
                    printf("Out of Range");
                }
            }
        }
    }
    
    return 0;
}
