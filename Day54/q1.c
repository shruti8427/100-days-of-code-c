/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 54                              Question : 1
 * Date : 02-10-2026
 * PROBLEM STATEMENT :Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
 * 
 * Sample Test Cases:
 * Input 1:
 * n = 8
 * Output 1:
 * 6
 * 
 * Input 2:
 * n = 1
 * Output 2:
 * 1
 * 
 * Input 3:
 * n = 4
 * Output 3:
 * -1
 */

#include <stdio.h>

// Function to find the pivot integer x using binary search O(log n)
int find_pivot_integer(int n) {
    int total_sum = n * (n + 1) / 2;
    int low = 1, high = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int sum_1_to_x = mid * (mid + 1) / 2;
        int sum_x_to_n = total_sum - sum_1_to_x + mid;

        if (sum_1_to_x == sum_x_to_n) {
            return mid;
        } else if (sum_1_to_x < sum_x_to_n) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n;

    // Read positive integer n
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    int result = find_pivot_integer(n);
    printf("%d\n", result);

    return 0;
}