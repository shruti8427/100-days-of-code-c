/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 67                              Question : 1
 * Date : 19-10-2026
 * PROBLEM STATEMENT :Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
 * 
 * Sample Test Cases:
 * Input 1:
 * nums1 = [2,7,11,15] nums2 = [4,8,10]
 * Output 1:
 * 2 4 7 8 10 11 15
 * 
 * Input 2:
 * nums1 = [1,2,7] nums2 = [9,10,17]
 * Output 2:
 * 1 2 7 9 10 17
 * 
 * Input 3:
 * nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
 * Output 3:
 * -10 -3 -2 -1 7 7
 */

#include <stdio.h>

// Function to merge two sorted arrays and print the result
void merge_sorted_arrays(int nums1[], int m, int nums2[], int n) {
    int merged[2000];
    int i = 0, j = 0, k = 0;

    // Traverse both arrays and insert the smaller element into merged array
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    // Copy remaining elements of nums1, if any
    while (i < m) {
        merged[k++] = nums1[i++];
    }

    // Copy remaining elements of nums2, if any
    while (j < n) {
        merged[k++] = nums2[j++];
    }

    // Print the merged array separated by spaces
    for (int idx = 0; idx < k; idx++) {
        if (idx == k - 1) {
            printf("%d", merged[idx]);
        } else {
            printf("%d ", merged[idx]);
        }
    }
    printf("\n");
}

int main() {
    int m;
    if (scanf("%d", &m) != 1 || m < 0) {
        return 0;
    }

    int nums1[1000];
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    int n;
    if (scanf("%d", &n) != 1 || n < 0) {
        return 0;
    }

    int nums2[1000];
    for (int j = 0; j < n; j++) {
        scanf("%d", &nums2[j]);
    }

    merge_sorted_arrays(nums1, m, nums2, n);

    return 0;
}