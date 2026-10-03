/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 55                             Question : 1
 * Date : 03-10-2026
 * PROBLEM STATEMENT : Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
 * 
 * Sample Test Cases:
 * Input 1:
 * nums = [3,2,3]
 * Output 1:
 * 3
 * 
 * Input 2:
 * nums = [2,2,1,1,1,2,2]
 * Output 2:
 * 2
 * 
 * Input 3:
 * nums = [2,2,1,1,1,2,2,3]
 * Output 3:
 * -1
 */

#include <stdio.h>

// Function to find majority element using Boyer-Moore Voting Algorithm
int find_majority_element(int nums[], int size) {
    int candidate = -1;
    int count = 0;

    // Phase 1: Find potential majority candidate
    for (int i = 0; i < size; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify if candidate occurs strictly more than n / 2 times
    int actual_count = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] == candidate) {
            actual_count++;
        }
    }

    if (actual_count > size / 2) {
        return candidate;
    }

    return -1;
}

int main() {
    int n;

    // Read size of array
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    int nums[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = find_majority_element(nums, n);
    printf("%d\n", result);

    return 0;
}