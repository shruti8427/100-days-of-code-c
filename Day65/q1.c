/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 65                          Question : 1
 * Date : 17-10-2026
 * PROBLEM STATEMENT : Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
 * 
 * Sample Test Cases:
 * Input 1:
 * s = "anagram", t = "nagaram"
 * Output 1:
 * Anagram
 * 
 * Input 2:
 * s = "rat", t = "car"
 * Output 2:
 * Not Anagram
 */

#include <stdio.h>
#include <string.h>

// Function to check if two strings are valid anagrams
int is_anagram(char *s, char *t) {
    if (strlen(s) != strlen(t)) {
        return 0;
    }

    int count[26] = {0};

    // Count frequencies of characters in string s and decrement for string t
    for (int i = 0; s[i] != '\0' && t[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char s[1000], t[1000];

    // Read both strings
    if (scanf("%s %s", s, t) != 2) {
        printf("Not Anagram\n");
        return 0;
    }

    if (is_anagram(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}