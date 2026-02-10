#include <stdio.h>
#include <math.h>

int main()
{
    int principle, years;
    double interest;
    printf("principle:");
    scanf("%d", &principle);
    printf("interest:");
    scanf("%lf", &interest);
    printf("years:");
    scanf("%d", &years);
    int month = years * 12;
    double rate = interest / 1200;
    double emi = (principle * rate * pow(1+rate, month))/ (pow(1+rate, month) - 1);
    printf("Your Monthly EMI is: %.2f", emi);
    return 0;
}