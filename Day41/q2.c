/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 41                              Question : 2
 * Date : 19-09-2026
 * PROBLEM STATEMENT : Print each character of a string on a new line.
 * 
 * Sample Test Cases:
 * Input 1:
 * Hi
 * Output 1:
 * H
 * i
 */

#include <stdio.h>

int main() {
    char str[1000];

    // Read full string including spaces until newline
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    // Traverse the string and print each character on a new line
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}