/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 21                              Question : 2
 * Date : 30-08-2026
 * PROBLEM STATEMENT : Write a program to check if a number is a perfect number.
 * 
 * Sample Test Cases:
 * Input 1:
 * 6
 * Output 1:
 * Perfect number
 * 
 * Input 2:
 * 10
 * Output 2:
 * Not perfect number
 */

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n <= 0) {
        printf("Not perfect number\n");
        return 0;
    }

    int sum = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}