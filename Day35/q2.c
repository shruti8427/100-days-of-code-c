/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 35                              Question : 2
 * Date : 13-09-2026
 * PROBLEM STATEMENT : Rotate an array to the right by k positions.
 * 
 * Sample Test Cases:
 * Input 1:
 * 5
 * 1 2 3 4 5
 * 2
 * Output 1:
 * 4 5 1 2 3
 */

#include <stdio.h>

// Helper function to reverse a portion of the array in-place
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);
    
    // Optimize rotations if k > n
    k = k % n;
    
    // Reversal algorithm for right rotation:
    // 1. Reverse the entire array
    // 2. Reverse the first 'k' elements
    // 3. Reverse the remaining 'n - k' elements
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}