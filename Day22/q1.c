/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 22                              Question : 1
 * Date : 31-08-2026
 * PROBLEM STATEMENT : Write a program to check if a number is a strong number.
 * 
 * Sample Test Cases:
 * Input 1:
 * 145
 * Output 1:
 * Strong number
 * 
 * Input 2:
 * 123
 * Output 2:
 * Not strong number
 */

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n <= 0) {
        printf("Not strong number\n");
        return 0;
    }

    int temp = n;
    int sum = 0;

    while (temp > 0) {
        int digit = temp % 10;

        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == n) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}