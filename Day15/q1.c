/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 15                              Question : 1
 * Date : 24-08-2026
 * PROBLEM STATEMENT : Write a program to calculate the factorial of a number.
 * 
 * Sample Test Cases:
 * Input 1:
 * 5
 * Output 1:
 * 120
 * 
 * Input 2:
 * 3
 * Output 2:
 * 6
 */

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n < 0) {
        return 1;
    }

    long long factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("%lld\n", factorial);

    return 0;
}