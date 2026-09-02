/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 24                              Question : 2
 * Date : 02-09-2026
 * PROBLEM STATEMENT : Write a program to print the following pattern:
 * 1
 * 12
 * 123
 * 1234
 * 12345
 * 
 * Sample Test Cases:
 * Input 1:
 * 
 * Output 1:
 * 1
 * 12
 * 123
 * 1234
 * 12345
 */

#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}