/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 21                              Question : 1
 * Date : 30-08-2026
 * PROBLEM STATEMENT : Write a program to swap the first and last digit of a number.
 * 
 * Sample Test Cases:
 * Input 1:
 * 1234
 * Output 1:
 * 4231
 * 
 * Input 2:
 * 1001
 * Output 2:
 * 1001
 */

#include <stdio.h>
#include <math.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n >= 0 && n < 10) {
        printf("%d\n", n);
        return 0;
    }

    int temp = n;
    int last_digit = temp % 10;
    int digits = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    int pow_10 = (int)pow(10, digits - 1);
    int first_digit = n / pow_10;

    int middle = (n % pow_10) / 10;

    int swapped = last_digit * pow_10 + middle * 10 + first_digit;

    printf("%d\n", swapped);

    return 0;
}