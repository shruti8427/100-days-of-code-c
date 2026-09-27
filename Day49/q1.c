/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 49                              Question : 1
 * Date : 27-09-2026
 * PROBLEM STATEMENT : Print the initials of a name.
 * 
 * Sample Test Cases:
 * Input 1:
 * John Doe
 * Output 1:
 * J.D.
 */

#include <stdio.h>

int main() {
    char str[1000];

    // Read input name including spaces until newline
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    // Print the initial of the first word if string is non-empty
    if (str[0] != '\0' && str[0] != ' ') {
        printf("%c.", str[0]);
    }

    // Print the initial after every space encountered
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            printf("%c.", str[i + 1]);
        }
    }

    printf("\n");

    return 0;
}