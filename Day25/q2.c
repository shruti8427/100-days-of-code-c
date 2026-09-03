/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 25                              Question : 2
 * Date : 03-09-2026
 * PROBLEM STATEMENT : Write a program to print the following pattern:
 * *****
 *  ****
 *   ***
 *    **
 *     *
 * 
 * Sample Test Cases:
 * Input 1:
 * 
 * Output 1:
 * *****
 *  ****
 *   ***
 *    **
 *     *
 * 
 * Input 2:
 * 
 * Output 2:
 * Note: Spaces indicate indentation.
 */

#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 0; k < rows - i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}