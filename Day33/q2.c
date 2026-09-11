/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 33                              Question : 2
 * Date : 11-09-2026
 * PROBLEM STATEMENT : Insert an element in a sorted array at the appropriate position.
 * 
 * Sample Test Cases:
 * Input 1:
 * 5
 * 1 2 4 5 6
 * 3
 * Output 1:
 * 1 2 3 4 5 6
 */

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    int arr[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int element;
    scanf("%d", &element);

    // Find position and shift elements to the right
    int i = n - 1;
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = element;

    // Print the updated array
    for (int j = 0; j <= n; j++) {
        printf("%d", arr[j]);
        if (j < n) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}