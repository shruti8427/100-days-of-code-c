/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 58                              Question : 1
 * Date : 06-10-2026
 * PROBLEM STATEMENT : Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
 * 
 * Sample Test Cases:
 * Input 1:
 * nums = [1,2,3,4]
 * Output 1:
 * [24,12,8,6]
 * 
 * Input 2:
 * nums = [-1,1,0,-3,3]
 * Output 2:
 * [0,0,9,0,0]
 */

#include <stdio.h>

// Function to calculate product of array except self in O(n) time
void product_except_self(int nums[], int size) {
    int answer[1000];

    // Compute prefix products directly in answer array
    answer[0] = 1;
    for (int i = 1; i < size; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    // Multiply suffix products on the fly
    int suffix_product = 1;
    for (int i = size - 1; i >= 0; i--) {
        answer[i] = answer[i] * suffix_product;
        suffix_product *= nums[i];
    }

    // Print output in exact array format [val1,val2,...]
    printf("[");
    for (int i = 0; i < size; i++) {
        if (i == size - 1) {
            printf("%d", answer[i]);
        } else {
            printf("%d,", answer[i]);
        }
    }
    printf("]\n");
}

int main() {
    int n;

    // Read size of array
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("[]\n");
        return 0;
    }

    int nums[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    product_except_self(nums, n);

    return 0;
}