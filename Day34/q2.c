/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 34                              Question : 2
 * Date : 12-09-2026
 * PROBLEM STATEMENT : Delete an element from an array.
 * 
 * Sample Test Cases:
 * Input 1:
 * 5
 * 1 2 3 4 5
 * 2
 * Output 1:
 * 1 2 4 5
 */

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos;
    scanf("%d", &pos);

    // Shift elements to the left to overwrite the element at 'pos'
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print the updated array with (n - 1) elements
    for (int i = 0; i < n - 1; i++) {
        printf("%d", arr[i]);
        if (i < n - 2) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}