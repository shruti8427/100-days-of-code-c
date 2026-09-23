/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 45                              Question : 1
 * Date : 23-09-2026
 * PROBLEM STATEMENT : Count frequency of a given character in a string.
 * 
 * Sample Test Cases:
 * Input 1:
 * programming
 * g
 * Output 1:
 * 2
 */

#include <stdio.h>

int main() {
    char str[1000];
    char target;

    // Read full string including spaces until newline
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    // Read the target character (space before %c skips trailing newline)
    if (scanf(" %c", &target) != 1) {
        return 0;
    }

    int frequency = 0;

    // Traverse string and count occurrences of target character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            frequency++;
        }
    }

    printf("%d\n", frequency);

    return 0;
}