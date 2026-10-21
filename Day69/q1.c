/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 69                              Question : 1
 * Date : 21-10-2026
 * PROBLEM STATEMENT : Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
 * 
 * Sample Test Cases:
 * Input 1:
 * nums1 = [1,3,3,4]
 * Output 1:
 * 3
 * 
 * Input 2:
 * nums1 = [1,2,2]
 * Output 2:
 * 2
 * 
 * Input 3:
 * nums1 = [0,4,1,1,5]
 * Output 3:
 * 1
 */

#include <stdio.h>

// Function to find the repeated element in a single iteration using a frequency tracker
int find_repeated_element(int arr[], int size) {
    int freq[1000] = {0};

    for (int i = 0; i < size; i++) {
        int val = arr[i];
        freq[val]++;
        // As soon as an element's frequency hits 2, we found the repeated element in O(1) extra check per step
        if (freq[val] > 1) {
            return val;
        }
    }

    return -1;
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

    int result = find_repeated_element(arr, n);
    printf("%d\n", result);

    return 0;
}