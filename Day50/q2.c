/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 50                              Question : 2
 * Date : 28-09-2026
 * PROBLEM STATEMENT : Print all sub-strings of a string.
 * 
 * Sample Test Cases:
 * Input 1:
 * abc
 * Output 1:
 * a,ab,abc,b,bc,c
 */

#include <stdio.h>

int main() {
    char str[1000];

    // Read full string including spaces until newline
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    int is_first = 1;

    // Generate all substrings starting from index i to index j
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (!is_first) {
                printf(",");
            }
            // Print substring from index i to j
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            is_first = 0;
        }
    }

    printf("\n");

    return 0;
}