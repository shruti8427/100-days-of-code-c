/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 20                              Question : 1
 * Date : 29-08-2026
 * PROBLEM STATEMENT : Write a program to find the product of odd digits of a number.
 * 
 * Sample Test Cases:
 * Input 1:
 * 12345
 * Output 1:
 * 15
 * 
 * Input 2:
 * 2468
 * Output 2:
 * 1
 */

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    int num = n;
    if (num < 0) {
        num = -num;
    }

    long long product = 1;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
        }
        num /= 10;
    }

    printf("%lld\n", product);

    return 0;
}