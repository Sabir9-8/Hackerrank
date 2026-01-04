#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num;
    scanf("%d", &num);
    int d1, d2, d3, d4;
    d1 = num / 1000;
    d2 = (num / 100) % 10;
    d3 = (num / 10) % 10;
    d4 = num % 10;
    if (d1 == d2 && d2 == d3 && d3 == d4) {
        printf("%d", num);
    }
    else if (d1>=d2 && d1>=d3 && d1>=d4) {
        if (d2>=d3 && d2>=d4) {
            if (d3>=d4) {
                printf("%d%d%d%d", d1, d2, d3, d4);
            }
            else if (d4>=d3) {
                printf("%d%d%d%d", d1, d2, d4, d3);
            }
        }
        else if (d3>=d2 && d3>=d4) {
            if (d2>=d4) {
                printf("%d%d%d%d", d1, d3, d2, d4);
            }
            else if (d4>=d2) {
                printf("%d%d%d%d", d1, d3, d4, d2);
            }
        }
        else if (d4>=d2 && d4>=d3) {
            if (d2>=d3) {
                printf("%d%d%d%d", d1, d4, d2, d3);
            }
            else if (d3>=d2) {
                printf("%d%d%d%d", d1, d4, d3, d2);
            }
        }
        
    }
    else if (d2>=d1 && d2>=d3 && d2>=d4) {
        if (d1>=d3 && d1>=d4) {
            if (d3>=d4) {
                printf("%d%d%d%d", d2, d1, d3, d4);
            }
            else if (d4>=d3) {
                printf("%d%d%d%d", d2, d1, d4, d3);
            }
        }
        else if (d3>=d1 && d3>=d4) {
            if (d1>=d4) {
                printf("%d%d%d%d", d2, d3, d1, d4);
            }
            else if (d4>=d1) {
                printf("%d%d%d%d", d2, d3, d4, d1);
            }
        }
        else if (d4>=d1 && d4>=d3) {
            if (d1>=d3) {
                printf("%d%d%d%d", d2, d4, d1, d3);
            }
            else if (d3>=d1) {
                printf("%d%d%d%d", d2, d4, d3, d1);
            }
        }
    }
    else if (d3>=d1 && d3>=d2 && d3>=d4) {
        if (d1>=d2 && d1>=d4) {
            if (d2>=d4) {
                printf("%d%d%d%d", d3, d1, d2, d4);
            }
            else if (d4>=d2) {
                printf("%d%d%d%d", d3, d1, d4, d2);
            }
        }
        else if (d2>=d1 && d2>=d4) {
            if (d1>=d4) {
                printf("%d%d%d%d", d3, d2, d1, d4);
            }
            else if (d4>=d1) {
                printf("%d%d%d%d", d3, d2, d4, d1);
            }
        }
        else if (d4>=d1 && d4>=d2) {
            if (d1>=d2) {
                printf("%d%d%d%d", d3, d4, d1, d2);
            }
            else if (d2>=d1) {
                printf("%d%d%d%d", d3, d4, d2, d1);
            }
        }
    }
    else if (d4>=d1 && d4>=d2 && d4>=d3) {
        if (d1>=d2 && d1>=d3) {
            if (d2>=d3) {
                printf("%d%d%d%d", d4, d1, d2, d3);
            }
            else if (d3>=d2) {
                printf("%d%d%d%d", d4, d1, d3, d2);
            }
        }
        else if (d2>=d1 && d2>=d3) {
            if (d1>=d3) {
                printf("%d%d%d%d", d4, d2, d1, d3);
            }
            else if (d3>=d1) {
                printf("%d%d%d%d", d4, d2, d3, d1);
            }
        }
        else if (d3>=d1 && d3>=d2) {
            if (d1>=d2) {
                printf("%d%d%d%d", d4, d3, d1, d2);
            }
            else if (d2>=d1) {
                printf("%d%d%d%d", d4, d3, d2, d1);
            }
        }
    }
    return 0;
}
