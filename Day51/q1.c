/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 51                              Question : 1
 * Date : 29-09-2026
 * PROBLEM STATEMENT : Find the first and last occurrence index of a target element in a sorted array using binary search.
 * 
 * Sample Test Cases:
 * Input 1:
 * nums = [5,7,7,8,8,10], target = 8
 * Output 1:
 * 3,4
 * 
 * Input 2:
 * nums = [5,7,7,8,8,10], target = 6
 * Output 2:
 * -1,-1
 * 
 * Input 3:
 * nums = [5,7,7,8,8,10], target = 10
 * Output 3:
 * 5,5
 */

#include <stdio.h>

// Helper function to find the bound (first or last occurrence) using Binary Search
int find_bound(int arr[], int size, int target, int is_first) {
    int low = 0, high = size - 1;
    int bound = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            bound = mid;
            if (is_first) {
                high = mid - 1; // Keep searching left for first occurrence
            } else {
                low = mid + 1;  // Keep searching right for last occurrence
            }
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return bound;
}

int main() {
    int n;

    // Read size of array
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1,-1\n");
        return 0;
    }

    int nums[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int target;
    scanf("%d", &target);

    int first = find_bound(nums, n, target, 1);
    int last = find_bound(nums, n, target, 0);

    printf("%d,%d\n", first, last);

    return 0;
}