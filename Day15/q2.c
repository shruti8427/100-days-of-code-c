/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 15                              Question : 2
 * Date : 24-08-2026
 * PROBLEM STATEMENT : Write a program to reverse a given number.
 * 
 * Sample Test Cases:
 * Input 1:
 * 1234
 * Output 1:
 * 4321
 * 
 * Input 2:
 * 100
 * Output 2:
 * 1
 */

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    int reversed = 0;
    int num = n;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    printf("%d\n", reversed);

    return 0;
}