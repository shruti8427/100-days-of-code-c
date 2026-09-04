/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 26                              Question : 2
 * Date : 04-09-2026
 * PROBLEM STATEMENT : Write a program to print the following pattern:
 * 
 * *
 * 
 * *
 * *
 * *
 * 
 * *
 * *
 * *
 * *
 * *
 * 
 * *
 * *
 * *
 * 
 * *
 * 
 * Sample Test Cases:
 * Input 1:
 * 
 * Output 1:
 * *
 * 
 * *
 * *
 * *
 * 
 * *
 * *
 * *
 * *
 * *
 * 
 * *
 * *
 * *
 * 
 * *
 */

#include <stdio.h>

int main() {
    int pattern[] = {1, 3, 5, 3, 1};
    int n = sizeof(pattern) / sizeof(pattern[0]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < pattern[i]; j++) {
            printf("*\n");
        }
        if (i < n - 1) {
            printf("\n");
        }
    }

    return 0;
}