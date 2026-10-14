/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 62                             Question : 1
 * Date : 14-10-2026
 * PROBLEM STATEMENT :Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
 * 
 * Sample Test Cases:
 * Input 1:
 * arr[] = [2, 3, -8, 7, -1, 2, 3]
 * Output 1:
 * 11
 * 
 * Input 2:
 * arr[] = [-2, -4]
 * Output 2:
 * -2
 * 
 * Input 3:
 * arr[] = [5, 4, 1, 7, 8]
 * Output 3:
 * 25
 */

#include <stdio.h>

// Function to find maximum contiguous subarray sum using Kadane's Algorithm
int kadane_max_subarray_sum(int arr[], int size) {
    if (size <= 0) {
        return 0;
    }

    int max_so_far = arr[0];
    int current_sum = arr[0];

    for (int i = 1; i < size; i++) {
        // Decide whether to add to the existing subarray or start a new one
        if (current_sum < 0) {
            current_sum = arr[i];
        } else {
            current_sum += arr[i];
        }

        if (current_sum > max_so_far) {
            max_so_far = current_sum;
        }
    }

    return max_so_far;
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

    int result = kadane_max_subarray_sum(arr, n);
    printf("%d\n", result);

    return 0;
}