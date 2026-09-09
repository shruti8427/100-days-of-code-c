/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 31                              Question : 1
 * Date : 09-09-2026
 * PROBLEM STATEMENT : Search for an element in an array using linear search.
 * 
 * Sample Test Cases:
 * Input 1:
 * 5
 * 1 2 3 4 5
 * 3
 * Output 1:
 * Found at index 2
 * 
 * Input 2:
 * 4
 * 10 20 30 40
 * 25
 * Output 2:
 * -1
 */

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    scanf("%d", &target);

    int found_index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found_index = i;
            break;
        }
    }

    if (found_index != -1) {
        printf("Found at index %d\n", found_index);
    } else {
        printf("-1\n");
    }

    return 0;
}