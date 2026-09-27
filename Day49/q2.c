/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 49                              Question : 2
 * Date : 27-09-2026
 * PROBLEM STATEMENT : Print initials of a name with the surname displayed in full.
 * 
 * Sample Test Cases:
 * Input 1:
 * John David Doe
 * Output 1:
 * J.D. Doe
 */

#include <stdio.h>

int main() {
    char str[1000];

    // Read full name including spaces until newline
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    // Find the starting index of the last word (surname)
    int surname_start = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            surname_start = i + 1;
            break;
        }
    }

    // Print initial for the first word
    if (str[0] != '\0' && str[0] != ' ') {
        printf("%c.", str[0]);
    }

    // Print initials for subsequent middle words before the surname
    for (int i = 0; i < surname_start - 1; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ') {
            printf("%c.", str[i + 1]);
        }
    }

    // Print space and surname in full if surname exists, else handle single name
    if (surname_start > 0) {
        printf(" ");
        for (int i = surname_start; str[i] != '\0'; i++) {
            printf("%c", str[i]);
        }
    }

    printf("\n");

    return 0;
}