/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 46                              Question : 1
 * Date : 24-09-2026
 * PROBLEM STATEMENT : Remove all vowels from a string.
 * 
 * Sample Test Cases:
 * Input 1:
 * education
 * Output 1:
 * dctn
 */

#include <stdio.h>

int main() {
    char str[1000];

    // Read full string including spaces until newline
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    int j = 0;

    // Filter out vowels in-place using two-pointer overwrite
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("%s\n", str);

    return 0;
}