/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 32                              Question : 1
 * Date : 10-09-2026
 * PROBLEM STATEMENT : Merge two arrays.
 * 
 * Sample Test Cases:
 * Input 1:
 * 3
 * 1 2 3
 * 2
 * 4 5
 * Output 1:
 * 1 2 3 4 5
 */

#include <stdio.h>

int main() {
    int n1, n2;

    if (scanf("%d", &n1) != 1 || n1 < 0) {
        return 1;
    }

    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    if (scanf("%d", &n2) != 1 || n2 < 0) {
        return 1;
    }

    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];

    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    int total = n1 + n2;
    for (int i = 0; i < total; i++) {
        printf("%d", merged[i]);
        if (i < total - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}