/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 43                              Question : 2
 * Date : 21-09-2026
 * PROBLEM STATEMENT : Check if a string is a palindrome.
 * 
 * Sample Test Cases:
 * Input 1:
 * madam
 * Output 1:
 * Palindrome
 * 
 * Input 2:
 * hello
 * Output 2:
 * Not palindrome
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
    char str[1000];

    // Read full string including spaces until newline
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    int length = 0;

    // Calculate length manually
    while (str[length] != '\0') {
        length++;
    }

    bool is_palindrome = true;
    int left = 0;
    int right = length - 1;

    // Two-pointer comparison from outwards to center
    while (left < right) {
        if (str[left] != str[right]) {
            is_palindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (is_palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}