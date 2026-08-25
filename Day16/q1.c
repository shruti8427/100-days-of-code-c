/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 16                              Question : 1
 * Date : 25-08-2026
 * PROBLEM STATEMENT : Write a program to take a number as input and print its equivalent binary representation.
 * 
 * Sample Test Cases:
 * Input 1:
 * 10
 * Output 1:
 * 1010
 * 
 * Input 2:
 * 7
 * Output 2:
 * 111
 */

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int binary[32];
    int i = 0;
    int num = n;

    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}