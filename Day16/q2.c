/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 16                              Question : 2
 * Date : 25-08-2026
 * PROBLEM STATEMENT : Write a program to check if a number is a palindrome.
 * 
 * Sample Test Cases:
 * Input 1:
 * 121
 * Output 1:
 * Palindrome
 * 
 * Input 2:
 * 123
 * Output 2:
 * Not palindrome
 */

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    int original = n;
    int reversed = 0;
    int num = n;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}