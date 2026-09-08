/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 29                              Question : 1
 * Date : 07-09-2026
 * PROBLEM STATEMENT : Find the sum of array elements.
 * 
 * Sample Test Cases:
 * Input 1:
 * 4
 * 2 4 6 8
 * Output 1:
 * 20
 * 
 * Input 2:
 * 3
 * 1 1 1
 * Output 2:
 * 3
 */

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d\n", sum);

    return 0;
}