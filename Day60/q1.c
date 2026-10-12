/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 60                             Question : 1
 * Date : 12-10-2026
 * PROBLEM STATEMENT : Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
 * 
 * Sample Test Cases:
 * Input 1:
 * arr = [1, 2, 3, 1, 4, 5, 2, 3, 6], k = 3
 * Output 1:
 * 3 3 4 5 5 5 6
 * 
 * Input 2:
 * arr = [5, 1, 3, 4, 2], k = 1
 * Output 2:
 * 5 1 3 4 2
 */

#include <stdio.h>

// Function to find maximum in each sliding window of size k
void print_max_in_windows(int arr[], int size, int k) {
    if (size < k || k <= 0) {
        return;
    }

    // Traverse each window of size k
    for (int i = 0; i <= size - k; i++) {
        int max_val = arr[i];

        // Find maximum element in the current window
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max_val) {
                max_val = arr[j];
            }
        }

        // Print space-separated results
        if (i == size - k) {
            printf("%d", max_val);
        } else {
            printf("%d ", max_val);
        }
    }
    printf("\n");
}

int main() {
    int n;

    // Read size of array
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    print_max_in_windows(arr, n, k);

    return 0;
}