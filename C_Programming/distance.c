#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// This program reads two characters from the user, computes the distance between their ASCII values, and prints the result.
int main() {

    char a,b;
    scanf("%c %c",&a,&b);
    int distance = b - a;
    printf("The distance between %c and %c is %d\n",a,b,distance);
    return 0;
}
