/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 43                              Question : 1
 * Date : 21-09-2026
 * PROBLEM STATEMENT : Reverse a string.
 * 
 * Sample Test Cases:
 * Input 1:
 * abcd
 * Output 1:
 * dcba
 */

#include <stdio.h>

int main() {
    char str[1000];

    // Read input string including spaces until newline
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    int length = 0;

    // Find length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string using two pointers in-place
    int left = 0;
    int right = length - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }

    printf("%s\n", str);

    return 0;
}