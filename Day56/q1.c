/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 56                            Question : 1
 * Date : 04-10-2026
 * PROBLEM STATEMENT : Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.
 * 
 * Sample Test Cases:
 * Input 1:
 * arr = [1, 3, 2, 4]
 * Output 1:
 * 3, 4, 4, -1
 * 
 * Input 2:
 * arr = [6, 8, 0, 1, 3]
 * Output 2:
 * 8, -1, 1, 3, -1
 * 
 * Input 3:
 * arr = [1, 2, 3, 5]
 * Output 3:
 * 2, 3, 5, -1
 * 
 * Input 4:
 * arr = [5, 4, 3, 1]
 * Output 4:
 * -1, -1, -1, -1
 */

#include <stdio.h>

// Function to find next greater elements using brute force (nested loops)
void print_next_greater_elements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int next_greater = -1;

        // Search for the first element to the right that is strictly greater
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[i]) {
                next_greater = arr[j];
                break;
            }
        }

        // Print in comma-separated format
        if (i == size - 1) {
            printf("%d", next_greater);
        } else {
            printf("%d, ", next_greater);
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

    print_next_greater_elements(arr, n);

    return 0;
}