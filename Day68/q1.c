/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 68                              Question : 1
 * Date : 20-10-2026
 * PROBLEM STATEMENT : Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number.
 * 
 * Sample Test Cases:
 * Input 1:
 * nums1 = [0,3,2,4]
 * Output 1:
 * 1
 * 
 * Input 2:
 * nums1 = [1,2,3]
 * Output 2:
 * 0
 * 
 * Input 3:
 * nums1 = [0,4,3,1,5]
 * Output 3:
 * 2
 */

#include <stdio.h>

// Function to find the missing number using the sum formula from 0 to n
int find_missing_number(int arr[], int size) {
    int expected_sum = size * (size + 1) / 2;
    int actual_sum = 0;

    for (int i = 0; i < size; i++) {
        actual_sum += arr[i];
    }

    return expected_sum - actual_sum;
}

int main() {
    int n;

    // Read size of array
    if (scanf("%d", &n) != 1 || n < 0) {
        return 0;
    }

    int arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int missing = find_missing_number(arr, n);
    printf("%d\n", missing);

    return 0;
}