#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the code to determine voting eligibility based on age.
int main() {

    int age;
    scanf("%d", &age);
    if (age >= 0 && age <= 150){
        if (age >= 18) {
            printf("Eligible");
        }
        else {
            printf("Not Eligible");
        }
    }
    return 0;
}