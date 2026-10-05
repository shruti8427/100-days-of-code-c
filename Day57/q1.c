/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 57                              Question : 1
 * Date : 05-10-2026
 * PROBLEM STATEMENT : Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.
 * 
 * Sample Test Cases:
 * Input 1:
 * arr = [1, 3, 2, 4]
 * Output 1:
 * -1, -1, 3, -1
 * 
 * Input 2:
 * arr = [6, 8, 0, 1, 3]
 * Output 2:
 * -1, -1, 8, 8, 8
 * 
 * Input 3:
 * arr = [1, 2, 3, 5]
 * Output 3:
 * -1, -1, -1, -1
 * 
 * Input 4:
 * arr = [5, 4, 3, 1]
 * Output 4:
 * -1, 5, 4, 3
 */

#include <stdio.h>

// Function to find previous greater elements using brute force (nested loops)
void print_previous_greater_elements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int prev_greater = -1;

        // Search for the nearest element to the left that is strictly greater
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev_greater = arr[j];
                break;
            }
        }

        // Print in comma-separated format
        if (i == size - 1) {
            printf("%d", prev_greater);
        } else {
            printf("%d, ", prev_greater);
        }
    }
    printf("\n");
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

    print_previous_greater_elements(arr, n);

    return 0;
}