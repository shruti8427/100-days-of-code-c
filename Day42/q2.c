/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 42                              Question : 2
 * Date : 20-09-2026
 * PROBLEM STATEMENT : Convert a lowercase string to uppercase without using built-in functions.
 * 
 * Sample Test Cases:
 * Input 1:
 * hello
 * Output 1:
 * HELLO
 */

#include <stdio.h>

int main() {
    char str[1000];

    // Read full string including spaces until newline
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    // Convert lowercase characters to uppercase in-place using ASCII difference ('a' - 'A' = 32)
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("%s\n", str);

    return 0;
}