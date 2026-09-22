/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 44                              Question : 1
 * Date : 22-09-2026
 * PROBLEM STATEMENT : Count spaces, digits, and special characters in a string.
 * 
 * Sample Test Cases:
 * Input 1:
 * a b1&2
 * Output 1:
 * Spaces=1, Digits=2, Special=1
 */

#include <stdio.h>

int main() {
    char str[1000];

    // Read full string including spaces until newline
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    int spaces = 0;
    int digits = 0;
    int special = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == ' ') {
            spaces++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
            // If it is not a space, digit, or alphabetic character, it is special
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}