/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 30                              Question : 2
 * Date : 08-09-2026
 * PROBLEM STATEMENT : Count positive, negative, and zero elements in an array.
 * 
 * Sample Test Cases:
 * Input 1:
 * 5
 * -1 0 1 2 -2
 * Output 1:
 * Positive=2, Negative=2, Zero=1
 */

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", positive_count, negative_count, zero_count);

    return 0;
}