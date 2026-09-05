/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 27                              Question : 2
 * Date : 05-09-2026
 * PROBLEM STATEMENT : Write a program to print the following pattern:
 * 
 *    *
 *   ***
 *  *****
 * *******
 *  *****
 *   ***
 *    *
 * 
 * Sample Test Cases:
 * Input 1:
 * 
 * Output 1:
 *    *
 *   ***
 *  *****
 * *******
 *  *****
 *   ***
 *    *
 */

#include <stdio.h>

int main() {
    int n = 4; // Number of rows in the upper half (including middle)

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}