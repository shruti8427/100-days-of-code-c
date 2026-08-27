/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 18                              Question : 2
 * Date : 27-08-2026
 * PROBLEM STATEMENT : Write a program to find the HCF (GCD) of two numbers.
 * 
 * Sample Test Cases:
 * Input 1:
 * 12 18
 * Output 1:
 * 6
 * 
 * Input 2:
 * 7 9
 * Output 2:
 * 1
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

    printf("%d\n", temp_a);

    return 0;
}