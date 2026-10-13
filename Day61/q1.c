/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 61                             Question : 1
 * Date : 13-10-2026
 * PROBLEM STATEMENT : Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
 * 
 * Sample Test Cases:
 * Input 1:
 * arr[] = [-8, 2, 3, -6, 10], k = 2
 * Output 1:
 * -8 0 -6 -6
 * 
 * Input 2:
 * arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
 * Output 2:
 * -1 -1 -7 -15 -15 0
 * 
 * Input 3:
 * arr[] = [12, 1, 3, 5], k = 3
 * Output 3:
 * 0 0
 */

#include <stdio.h>

// Function to find first negative integer in each sliding window of size k
void print_first_negative_in_windows(int arr[], int size, int k) {
    if (size < k || k <= 0) {
        return;
    }

    // Traverse each sliding window of size k
    for (int i = 0; i <= size - k; i++) {
        int first_negative = 0;

        // Search for the first negative element in current window
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                first_negative = arr[j];
                break;
            }
        }

        // Print space-separated results
        if (i == size - k) {
            printf("%d", first_negative);
        } else {
            printf("%d ", first_negative);
        }
    }
    printf("\n");
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

    int k;
    scanf("%d", &k);

    print_first_negative_in_windows(arr, n, k);

    return 0;
}