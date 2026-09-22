/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 44                              Question : 2
 * Date : 22-09-2026
 * PROBLEM STATEMENT : Replace spaces with hyphens in a string.
 * 
 * Sample Test Cases:
 * Input 1:
 * hello world
 * Output 1:
 * hello-world
 */

#include <stdio.h>

int main() {
    char str[1000];

    // Read full string including spaces until newline
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    // Traverse string and replace space characters with hyphens
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("%s\n", str);

    return 0;
}