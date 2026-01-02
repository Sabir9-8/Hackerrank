#include <stdio.h>

int main() {

    int age, income, tolerance;
    scanf("%d", &age);
    scanf("%d", &income);
    scanf("%d", &tolerance);
    
    if (tolerance == 1) {
        if (age < 30) {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
        }
        else if (income <= 30000) {
            printf("Low Risk Portfolio: Suitable for conservative investments.");
        }
        else if (30 <= age && age <= 50 && income > 75000) {
            printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
        }
    }
    else if (tolerance == 2) {
        if (age < 30) {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
       }
        else if (income <= 30000) {
            printf("Low Risk Portfolio: Suitable for conservative investments.");
        }
        else if (30 <= age && age <= 50) {
            printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
        }
        else {
            printf("Low Risk Portfolio: Suitable for conservative investments.");
      }
    }
    else if (tolerance == 3) {
        if (age < 30) {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
       }
        else if (30 <= age && income > 75000) {
            printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
        }
        else if (age > 50 && income < 75000) {
            printf("Low Risk Portfolio: Suitable for conservative investments.");
        }
        
    }
    return 0;
}