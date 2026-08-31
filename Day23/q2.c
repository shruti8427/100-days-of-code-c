/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 23                              Question : 2
 * Date : 01-09-2026
 * PROBLEM STATEMENT : Write a program to print the following pattern:
 * *****
 * *****
 * *****
 * *****
 * *****
 * 
 * Sample Test Cases:
 * Input 1:
 * 
 * Output 1:
 * *****
 * *****
 * *****
 * *****
 * *****
 */

#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}