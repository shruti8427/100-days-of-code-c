/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 78                              Question : 1
 * Date : 30-10-2026
 * PROBLEM STATEMENT : Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
 * 
 * Sample Test Cases:
 * Input 1:
 * File: text.txt (Content: Welcome to C language)
 * Output 1:
 * Vowels: 8
 * Consonants: 10
 */

#include <stdio.h>
#include <ctype.h>

int main() {
    // Open text.txt in read mode ("r")
    FILE *fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int vowels = 0;
    int consonants = 0;
    char ch;

    // Read character by character from the file until EOF
    while ((ch = fgetc(fp)) != EOF) {
        // Convert character to lowercase for easier comparison
        char lower = tolower(ch);

        // Check if the character is an alphabet letter
        if (lower >= 'a' && lower <= 'z') {
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        // Digits and special characters are automatically ignored
    }

    // Close the file
    fclose(fp);

    // Print the final counts as per sample output format
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}