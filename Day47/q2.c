/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 47                              Question : 2
 * Date : 25-09-2026
 * PROBLEM STATEMENT : Find the longest word in a sentence.
 * 
 * Sample Test Cases:
 * Input 1:
 * I love programming
 * Output 1:
 * programming
 */

#include <stdio.h>

int main() {
    char str[1000];

    // Read input sentence including spaces until newline
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    int max_len = 0;
    int max_start = 0;

    int current_len = 0;
    int current_start = 0;

    int i = 0;
    while (1) {
        char ch = str[i];

        // Word boundary encountered (space or end of string)
        if (ch == ' ' || ch == '\0') {
            if (current_len > max_len) {
                max_len = current_len;
                max_start = current_start;
            }
            current_len = 0;
            current_start = i + 1;
        } else {
            current_len++;
        }

        if (ch == '\0') {
            break;
        }
        i++;
    }

    // Print the longest word
    for (int k = 0; k < max_len; k++) {
        printf("%c", str[max_start + k]);
    }
    printf("\n");

    return 0;
}