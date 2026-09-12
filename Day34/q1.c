/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 34                              Question : 1
 * Date : 12-09-2026
 * PROBLEM STATEMENT : Insert an element in an array at a given position.
 * 
 * Sample Test Cases:
 * Input 1:
 * 4
 * 10 20 30 40
 * 2 15
 * Output 1:
 * 10 20 15 30 40
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

    int pos, val;
    scanf("%d %d", &pos, &val);

    // Shift elements to the right to make space for the new element at 'pos'
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;

    // Output the resulting array space-separated
    for (int i = 0; i <= n; i++) {
        printf("%d", arr[i]);
        if (i < n) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}