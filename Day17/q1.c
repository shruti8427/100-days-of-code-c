/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 17                              Question : 1
 * Date : 26-08-2026
 * PROBLEM STATEMENT : Write a program to check if a number is an Armstrong number.
 * 
 * Sample Test Cases:
 * Input 1:
 * 153
 * Output 1:
 * Armstrong
 * 
 * Input 2:
 * 123
 * Output 2:
 * Not Armstrong
 */

#include <stdio.h>
#include <math.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    int original = n;
    int temp = n;
    int digits = 0;
    int sum = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }

    if (sum == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}