#include <stdio.h>

void arrayUnion(int arr1[], int arr2[], int n1, int n2) {
    int i = 0, j = 0;
    int printed = 100000000;
    while (i < n1 && j < n2) {
        int element;
        if (arr1[i] < arr2[j]) {
            element = arr1[i++];
        }
        else if (arr1[i] > arr2[j]) {
            element = arr2[j++];
        }
        else {
            element = arr1[i];
            ++i; ++j;
        }
        if (element != printed) {
            printf("%d ", element);
            printed = element;
        }
    }
    while (i < n1) {
        if (arr1[i] != printed) {
            printf("%d ", arr1[i]);
            printed = arr1[i];
        }
        ++i;
    }
    while (j < n2) {
        if (arr2[j] != printed) {
            printf("%d ", arr2[j]);
            printed = arr2[j];
        }
        ++j;
    }
    printf("\n");
}

void arrayIntersection(int arr1[], int arr2[], int n1, int n2) {
    int printed = 100000000;
    int i = 0, j = 0;
    int possible = 0; 
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            ++i;
        }
        else if (arr1[i] > arr2[j]) {
            ++j;
        }
        else {
            if (arr1[i] != printed) {
                printf("%d ", arr1[i]);
                printed = arr1[i];
                possible = 1;
            }
            ++i; ++j;
        }
    }
    if (!possible) {
        printf("Intersection Not Possible\n");
    }
    else {
        printf("\n");
    }
}

int main() {

    int n1; scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; ++i) {
        scanf("%d", &arr1[i]);
    }
    int n2; scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; ++i) {
        scanf("%d", &arr2[i]);
    }
    arrayUnion(arr1, arr2, n1, n2);
    arrayIntersection(arr1, arr2, n1, n2);
    
    return 0;
}