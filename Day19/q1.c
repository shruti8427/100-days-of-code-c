/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 19                              Question : 1
 * Date : 28-08-2026
 * PROBLEM STATEMENT : Write a program to find the LCM of two numbers.
 * 
 * Sample Test Cases:
 * Input 1:
 * 4 5
 * Output 1:
 * 20
 * 
 * Input 2:
 * 7 3
 * Output 2:
 * 21
 */

#include <stdio.h>

int main() {
    int a, b;

    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    int temp_a = a;
    int temp_b = b;

    while (temp_b != 0) {
        int temp = temp_b;
        temp_b = temp_a % temp_b;
        temp_a = temp;
    }

    int gcd = temp_a;
    long long lcm = ((long long)a * b) / gcd;

    printf("%lld\n", lcm);

    return 0;
}