/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 22                              Question : 2
 * Date : 31-08-2026
 * PROBLEM STATEMENT : Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
 * 
 * Sample Test Cases:
 * Input 1:
 * 3
 * Output 1:
 * Approximate sum: 2.58
 * 
 * Input 2:
 * 5
 * Output 2:
 * Approximate sum: 4.40
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
        if (i == 1) {
            sum += 1.0;
        } else {
            double numerator = 2 * i - 1;
            double denominator = 2 * i;
            sum += numerator / denominator;
        }
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}