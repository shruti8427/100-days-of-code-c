/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 28                              Question : 1
 * Date : 06-09-2026
 * PROBLEM STATEMENT : Write a program to print all the prime numbers from 1 to n.
 * 
 * Sample Test Cases:
 * Input 1:
 * 10
 * Output 1:
 * 2 3 5 7
 * 
 * Input 2:
 * 20
 * Output 2:
 * 2 3 5 7 11 13 17 19
 */

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    int first = 1;

    for (int i = 2; i <= n; i++) {
        int is_prime = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            if (!first) {
                printf(" ");
            }
            printf("%d", i);
            first = 0;
        }
    }

    printf("\n");

    return 0;
}