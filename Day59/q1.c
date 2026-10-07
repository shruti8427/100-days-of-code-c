/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 59                             Question : 1
 * Date : 07-10-2026
 * PROBLEM STATEMENT : Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
 * 
 * Sample Test Cases:
 * Input 1:
 * arr = [100, 200, 300, 400], k = 2
 * Output 1:
 * 700
 * 
 * Input 2:
 * arr = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4
 * Output 2:
 * 39
 * 
 * Input 3:
 * arr = [100, 200, 300, 400], k = 1
 * Output 3:
 * 400
 */

#include <stdio.h>

// Function to find maximum subarray sum of size k using Sliding Window O(n)
int max_subarray_sum(int arr[], int size, int k) {
    if (size < k || k <= 0) {
        return -1;
    }

    // Compute sum of first window of size k
    int window_sum = 0;
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    int max_sum = window_sum;

    // Slide the window across the array
    for (int i = k; i < size; i++) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    return max_sum;
}

int main() {
    int n;

    // Read size of array
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    int arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    int result = max_subarray_sum(arr, n, k);
    printf("%d\n", result);

    return 0;
}