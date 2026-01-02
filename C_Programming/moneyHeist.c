#include <stdio.h>

int main() {

    int d0, d1, d2, d3, d4, d5, d6, d7, d8, d9;
    int index, update;

    scanf("%d %d %d %d %d %d %d %d %d %d", &d0, &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9);
    
    for (int i=1; i<=3; ++i) {
        scanf("%d %d", &index, &update);
        if (index == 0) {
            if ((d0 + update) <= 9) {
            d0 = d0 + update;
        }
            else {
            d0 = ((d0 + update) - 9) - 1;
            }
        }
        else if (index == 1) {
            if ((d1 + update) <= 9) {
                d1 = d1 + update;
            }
            else {
                d1 = ((d1 + update) - 9) - 1;
            }
        }
        else if (index == 2) {
            if ((d2 + update) <= 9) {
                d2 = d2 + update;
            }
            else {
                d2 = ((d2 + update) - 9) - 1;
            }
        }
        else if(index == 3) {
            if ((d3 + update) <= 9) {
                d3 = d3 + update;
            }
            else {
                d3 = ((d3 + update) - 9) - 1;
            }
        }
        else if(index == 4) {
            if ((d4 + update) <= 9) {
                d4 = d4 + update;
            }
            else {
                d4 = ((d4 + update) - 9) - 1;
            }
        }
        else if(index == 5) {
            if ((d5 + update) <= 9) {
                d5 = d5 + update;
            }
            else {
                d5 = ((d5 + update) - 9) - 1;
            }
        }
        else if(index == 6) {
            if ((d6 + update) <= 9) {
                d6 = d6 + update;
            }
            else {
                d6 = ((d6 + update) - 9) - 1;
            }
        }
        else if(index == 7) {
            if ((d7 + update) <= 9) {
                d7 = d7 + update;
            }
            else {
                d7 = ((d7 + update) - 9) - 1;
            }
        }
        else if(index == 8) {
            if ((d8 + update) <= 9) {
                d8 = d8 + update;
            }
            else {
                d8 = ((d8 + update) - 9) - 1;
            }
        }
        else if(index == 9) {
            if ((d9 + update) <= 9) {
                d9 = d9 + update;
            }
            else {
                d9 = ((d9 + update) - 9) - 1;
            }
        }
    }
    printf("%d %d %d %d %d %d %d %d %d %d", d0, d1, d2, d3, d4, d5, d6, d7, d8, d9);
    return 0;
}