#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    int sum=0, pdt = 1;
    
    while(1){
       int digit = n%10;
        sum += digit;
        pdt *= digit;
        n= n/10;
        if (n==0) 
            break;
    }
    int diff = pdt - sum;
    printf("%d", diff);
    return 0;
}
