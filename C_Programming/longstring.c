#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char str[100];
    for (int i = 0; i < n; ++i) {
        scanf(" %s", str);
        if (strlen(str) <= 10) {
            printf("%s\n", str);
        }
        else {
            int count = 0;
            for (int i = 0; str[i] != '\0'; ++i) {
                count++;
            }
            printf("%c", str[0]);
            printf("%d", count - 2);
            printf("%c\n", str[strlen(str) - 1]);
        }
    }
    
    return 0;
}