/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 19                              Question : 2
 * Date : 28-08-2026
 * PROBLEM STATEMENT : Write a program to find the sum of digits of a number.
 * 
 * Sample Test Cases:
 * Input 1:
 * 123
 * Output 1:
 * 6
 * 
 * Input 2:
 * 999
 * Output 2:
 * 27
 */

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    int sum = 0;
    int num = n;

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("%d\n", sum);

    return 0;
}