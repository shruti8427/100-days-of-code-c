/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 26                              Question : 1
 * Date : 04-09-2026
 * PROBLEM STATEMENT : Write a program to print the following pattern:
 *     5
 *    45
 *   345
 *  2345
 * 12345
 * 
 * Sample Test Cases:
 * Input 1:
 * 
 * Output 1:
 *     5
 *    45
 *   345
 *  2345
 * 12345
 */

#include <stdio.h>

int main() {
    int total_rows = 5;

    for (int i = 5; i >= 1; i--) {
        // Print leading spaces
        for (int space = 1; space < i; space++) {
            printf(" ");
        }
        // Print numbers from i to 5
        for (int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}