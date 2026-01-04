#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double D = b * b - (4.0*a*c);
    if (a != 0) {
        if (D == 0) {
            double x = -b/(2.0*a);
            printf("Roots: %.2f, %.2f\n", x, x);
            printf("Type: Real and Equal");
        }
        else if (D > 0) {
            double d = (double)sqrt((double)D);
            double x = (-b + d)/(2.0*a);
            double y = (-b - d)/(2.0*a);
            printf("Roots: %.2f, %.2f\n", x, y);
            printf("Type: Real and Distinct");
        }
        else if (D < 0){
            double d = fabs((double)D);
            double real = (-b)/(2.0*a);
            double img = sqrt((double)d)/(2.0*a);
            img = fabs(img);
            printf("Roots: %.2f + %.2fi, %.2f - %.2fi\n", real, img, real, img);
            printf("Type: Complex");
        }
    }
    return 0;
}