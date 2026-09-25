/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 47                              Question : 1
 * Date : 25-09-2026
 * PROBLEM STATEMENT : Check if two strings are anagrams of each other.
 * 
 * Sample Test Cases:
 * Input 1:
 * listen
 * silent
 * Output 1:
 * Anagrams
 * 
 * Input 2:
 * hello
 * world
 * Output 2:
 * Not anagrams
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
    char str1[1000];
    char str2[1000];

    // Read first string
    if (scanf("%[^\n]", str1) != 1) {
        return 0;
    }

    // Read second string (space before %[^\n] skips the trailing newline from previous input)
    if (scanf(" %[^\n]", str2) != 1) {
        return 0;
    }

    int freq[256] = {0};

    // Increment frequencies for characters in first string
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
    }

    // Decrement frequencies for characters in second string
    for (int i = 0; str2[i] != '\0'; i++) {
        freq[(unsigned char)str2[i]]--;
    }

    bool is_anagram = true;

    // If all character counts return to 0, strings are anagrams
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            is_anagram = false;
            break;
        }
    }

    if (is_anagram) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}