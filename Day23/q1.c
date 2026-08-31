/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 23                              Question : 1
 * Date : 01-09-2026
 * PROBLEM STATEMENT : Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
 * 
 * Sample Test Cases:
 * Input 1:
 * 3
 * Output 1:
 * Approximate sum: 1.56
 * 
 * Input 2:
 * 5
 * Output 2:
 * Approximate sum: 2.22
 */

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n <= 0) {
        return 0;
    }

    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        double numerator = 2.0 * i;
        double denominator = 4.0 * i - 1.0;
        sum += numerator / denominator;
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}