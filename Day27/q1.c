/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 27                              Question : 1
 * Date : 05-09-2026
 * PROBLEM STATEMENT : Write a program to print the following pattern:
 * *
 * ***
 * *****
 * *******
 * *********
 * *******
 * *****
 * ***
 * *
 * 
 * Sample Test Cases:
 * Input 1:
 * 
 * Output 1:
 * *
 * ***
 * *****
 * *******
 * *********
 * *******
 * *****
 * ***
 * *
 */

#include <stdio.h>

int main() {
    int max_stars = 9;

    // Upper half including the middle row
    for (int i = 1; i <= max_stars; i += 2) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (int i = max_stars - 2; i >= 1; i -= 2) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}