#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Function to determine the location of a point in Cartesian coordinates
int main() {
    int x, y;
    printf("Enter x and y coordinates: ");
    scanf("%d %d", &x, &y);
    if (x == 0) {
        if (y == 0) {
            printf("Point is at Origin");
        }
        else {
            printf((y > 0) ? "Point lies on +ve Y axis" : "Point lies on -ve Y axis");
        }
    }
    else if (y == 0) {
        printf((x > 0) ? "Point lies on +ve X axis" : "Point lies on -ve X axis");
    }
    else if (x > 0) {
        printf((y > 0) ? "Point lies in 1st Quadrant" : "Point lies in 4th Quadrant");
    }
    else if (x < 0) {
        printf((y > 0) ? "Point lies in 2nd Quadrant" : "Point lies in 3rd Quadrant");
    }
}