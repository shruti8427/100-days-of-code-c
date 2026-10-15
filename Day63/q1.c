/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 63                      Question : 1
 * Date : 15-10-2026
 * PROBLEM STATEMENT : Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
 * 
 * Sample Test Cases:
 * Input 1:
 * arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
 * Output 1:
 * 5
 * 
 * Input 2:
 * arr[] = [7, 10, 4, 3, 20, 15], k = 3
 * Output 2:
 * 7
 */

#include <stdio.h>

// Function to sort the array in ascending order (Bubble Sort) to find the k-th smallest element
int find_kth_smallest(int arr[], int size, int k) {
    if (k <= 0 || k > size) {
        return -1;
    }

    // Sort array in ascending order
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Return the k-th element (1-based index means index k-1)
    return arr[k - 1];
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

    int result = find_kth_smallest(arr, n, k);
    printf("%d\n", result);

    return 0;
}