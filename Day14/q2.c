/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 14                              Question : 2
 * Date : 23-08-2026
 * PROBLEM STATEMENT : Write a program to print the product of even numbers from 1 to n.
 * 
 * Sample Test Cases:
 * Input 1:
 * 4
 * Output 1:
 * 8
 * 
 * Input 2:
 * 6
 * Output 2:
 * 48
 */

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    long long product = 1;
    int has_even = 0;

    for (int i = 2; i <= n; i += 2) {
        product *= i;
        has_even = 1;
    }

    if (has_even) {
        printf("%lld\n", product);
    } else {
        printf("0\n");
    }

    return 0;
}