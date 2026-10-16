/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 64                             Question : 1
 * Date : 16-10-2026
 * PROBLEM STATEMENT : Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
 * 
 * Sample Test Cases:
 * Input 1:
 * s = "abcabcbb"
 * Output 1:
 * 3
 * 
 * Input 2:
 * s = "bbbbb"
 * Output 2:
 * 1
 * 
 * Input 3:
 * s = "pwwkew"
 * Output 3:
 * 3
 */

#include <stdio.h>
#include <string.h>

// Function to find the length of the longest substring without repeating characters using sliding window
int length_of_longest_substring(char *s) {
    int last_index[256];
    for (int i = 0; i < 256; i++) {
        last_index[i] = -1;
    }

    int max_len = 0;
    int left = 0;

    for (int right = 0; s[right] != '\0'; right++) {
        unsigned char current_char = s[right];

        // If character was seen and is within the current window, shift left pointer
        if (last_index[current_char] >= left) {
            left = last_index[current_char] + 1;
        }

        // Update last seen index of the character
        last_index[current_char] = right;

        // Calculate current window length
        int current_len = right - left + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }

    return max_len;
}

int main() {
    char s[1000];

    // Read string input
    if (scanf("%s", s) != 1) {
        printf("0\n");
        return 0;
    }

    int result = length_of_longest_substring(s);
    printf("%d\n", result);

    return 0;
}