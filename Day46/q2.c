/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 46                              Question : 2
 * Date : 24-09-2026
 * PROBLEM STATEMENT : Find the first repeating lowercase alphabet in a string.
 * 
 * Sample Test Cases:
 * Input 1:
 * stress
 * Output 1:
 * s
 */

#include <stdio.h>

int main() {
    char str[1000];

    // Read full string including spaces until newline
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    int freq[26] = {0};
    char repeating = '\0';

    // Traversal to find the first repeating lowercase alphabet
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            freq[index]++;

            // The first character whose count reaches 2 is the answer
            if (freq[index] == 2) {
                repeating = str[i];
                break;
            }
        }
    }

    if (repeating != '\0') {
        printf("%c\n", repeating);
    }

    return 0;
}