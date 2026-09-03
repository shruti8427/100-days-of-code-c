/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 25                              Question : 1
 * Date : 03-09-2026
 * PROBLEM STATEMENT : Write a program to print the following pattern:
 * 5
 * 45
 * 345
 * 2345
 * 12345
 * 
 * Sample Test Cases:
 * Input 1:
 * 
 * Output 1:
 * 5
 * 45
 * 345
 * 2345
 * 12345
 */

#include <stdio.h>

int main() {
    int total_rows = 5;

    for (int i = total_rows; i >= 1; i--) {
        for (int j = i; j <= total_rows; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}