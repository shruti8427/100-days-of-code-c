/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 66                              Question : 1
 * Date : 18-10-2026
 * PROBLEM STATEMENT : Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
 * 
 * Sample Test Cases:
 * Input 1:
 * nums = [2,7,11,15], target = 9
 * Output 1:
 * 0 1
 * 
 * Input 2:
 * nums = [3,2,4], target = 6
 * Output 2:
 * 1 2
 * 
 * Input 3:
 * nums = [3,3], target = 6
 * Output 3:
 * 0 1
 */

#include <stdio.h>

// Function to find two indices whose elements sum to target using brute force (nested loops)
void find_two_sum(int nums[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return;
            }
        }
    }
    printf("-1 -1\n");
}

int main() {
    int n;

    // Read size of array
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1 -1\n");
        return 0;
    }

    int nums[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int target;
    scanf("%d", &target);

    find_two_sum(nums, n, target);

    return 0;
}