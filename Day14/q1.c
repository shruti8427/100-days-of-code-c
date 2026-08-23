/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 14                              Question : 1
 * Date : 23-08-2026
 * PROBLEM STATEMENT : Write a program to print the sum of the first n odd numbers.
 * 
 * Sample Test Cases:
 * Input 1:
 * 3
 * Output 1:
 * 9
 * 
 * Input 2:
 * 5
 * Output 2:
 * 25
 */

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }

    printf("%d\n", sum);

    return 0;
}