#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    if (n == 0) {
        printf("Circle");
    }
    else if (n == 3) {
        int a, b, c, A, B, C;
        scanf("%d %d %d %d %d %d", &a, &b, &c, &A, &B, &C);
        if (A+B+C == 180 && a+b > c && b+c > a && c+a > b) {
            if (a == b && b == c && c == a && A == 60 && B == 60 && C == 60) {
                printf("Equilateral Triangle");
            }
            else if(A <= 0 || B <= 0 || C <= 0 || A == 180 || B == 180 || C == 180 ) {
                printf("Invalid Figure");
            }
            else if (a != b && b != c && c != a && A != B && B != C && C != A) {
                printf("Scalene Triangle");
            }
            else if (a == b && b != c && c != a && A == B && B != C && C != A) {
                printf("Isosceles Triangle");
            }
            else if (b == c && b != a && c != a && B == C && B != A && C != A) {
                printf("Isosceles Triangle");
            }
            else if (a == c && b != a && c != b && A == C && B != C && B != A) {
                printf("Isosceles Triangle");
            }
            else {
                printf("Invalid Figure");
            }
        }
        else {
            printf("Invalid Figure");
        }
    }
    else if (n == 4) {
        int a, b, c, d, A, B, C, D;
        scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &A, &B, &C, &D);
        if (a <= 0 || b <= 0 || c <= 0 || d <= 0 || A <= 0 || B <= 0 ||  C <= 0 || D <= 0) {
            printf("Invalid Figure");
        } 
        else if (a == b && b == c && c == d && A == 90 && B == 90 && C == 90 && D == 90) {
            printf("Square");
        }
        else if (a == b && b == c && c == d && A == C && B == D && A + B == 180 && B + C == 180 && A+B+C+D == 360) {
            printf("Rhombus");
        }
        
        else if (a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90) {
            printf("Rectangle");
        }
        else if (a == c && b == d && A == C && B == D && A + B == 180 && B + C == 180) {
            printf("Parallelogram");
        }
        else {
            printf("Invalid Figure");
        }
        
    }
    else {
        printf("Invalid Figure");
    }
    return 0;
}