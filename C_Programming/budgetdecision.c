#include <stdio.h>

int main() {

    int budget, guests, foodcost, decost, music, other;
    scanf("%d\n%d\n%d\n%d\n%d\n%d", &budget, &guests, &foodcost, &decost, &music, &other);
    if (guests > 5 && guests <= 50) {
        if (decost < budget * 0.3 || foodcost * guests < budget * 0.5) {
            int total;
            total = guests * foodcost + decost + other + music;
            if (guests > 25) {
                if (music > 0) {
                    if (budget >= total) {
                        printf("Celebration Approved");
                    }
                    else {
                        printf("Celebration Denied");
                    }
                }
                else {
                    printf("Celebration Denied");
                }
            }
            else {
                if (budget >= total) {
                    printf("Celebration Approved");
                }
                else {
                    printf("Celebration Denied");
                }
            }
        }
        else {
            printf("Celebration Denied");
        }
    }
    else {
        printf("Celebration Denied");
    }         
    return 0;
}