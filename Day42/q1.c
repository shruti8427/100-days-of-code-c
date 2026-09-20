/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 42                              Question : 1
 * Date : 20-09-2026
 * PROBLEM STATEMENT : Count vowels and consonants in a string.
 * 
 * Sample Test Cases:
 * Input 1:
 * hello
 * Output 1:
 * Vowels=2, Consonants=3
 */

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];

    // Read full string including spaces until newline
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    int vowels = 0;
    int consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower((unsigned char)str[i]);

        // Check if character is an alphabetic letter
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}