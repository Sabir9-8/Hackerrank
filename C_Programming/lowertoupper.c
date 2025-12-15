#include <stdio.h>
//A program to convert lowercase letter to uppercase letter

int main() {

    char lower;
    scanf("%c",&lower);
    char upper = lower - 32 ;
    printf("The uppercase of %c is %c\n",lower,upper);
    return 0;
}
