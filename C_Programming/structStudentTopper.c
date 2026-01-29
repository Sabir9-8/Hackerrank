#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    struct student {
        char name[20];
        int roll_no;
        float marks;
    } std[n];
    
    int top_index = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d  %s %f", &std[i].roll_no, std[i].name, &std[i].marks);
        if (std[top_index].marks < std[i].marks) {
            top_index = i;
        }
    }
    
    printf("Name of topper: %s\n", std[top_index].name);
    printf("Roll No.: %d\n", std[top_index].roll_no);
    printf("Marks: %.2f", std[top_index].marks);
    return 0;
}