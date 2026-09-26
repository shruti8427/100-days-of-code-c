/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 48                              Question : 2
 * Date : 26-09-2026
 * PROBLEM STATEMENT : Reverse each word in a sentence without changing the word order.
 * 
 * Sample Test Cases:
 * Input 1:
 * I love coding
 * Output 1:
 * I evol gnidoc
 */

#include <stdio.h>

int main() {
    char str[1000];

    // Read full sentence including spaces until newline
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    int start = 0;
    int i = 0;

    // Helper lambda-like in-place reverse logic executed per word boundary
    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            // Reverse the sub-array representing the current word: str[start ... i-1]
            int left = start;
            int right = i - 1;

            while (left < right) {
                char temp = str[left];
                str[left] = str[right];
                str[right] = temp;
                left++;
                right--;
            }

            // Move the start index to the character following the space
            start = i + 1;
        }

        if (str[i] == '\0') {
            break;
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}