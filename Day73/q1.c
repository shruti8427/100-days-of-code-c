/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 73                              Question : 1
 * Date : 25-10-2026
 * PROBLEM STATEMENT : Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
 * 
 * Sample Test Cases:
 * Input 1:
 * File: sample.txt (Content: Hello world\nThis is C programming)
 * Output 1:
 * Characters: 31
 * Words: 5
 * Lines: 2
 */

#include <stdio.h>
#include <ctype.h>

int main() {
    // Open sample.txt in read mode
    FILE *fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int characters = 0;
    int words = 0;
    int lines = 0;
    
    int in_word = 0;
    char ch;

    // Read file character by character using fgetc()
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        // Count lines on encountering a newline character
        if (ch == '\n') {
            lines++;
        }

        // Count words based on spaces, tabs, and newlines
        if (isspace(ch)) {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            words++;
        }
    }

    // If the file is not empty and doesn't end with a newline, account for the last line
    if (characters > 0 && lines == 0) {
        lines = 1;
    }

    // Close the file
    fclose(fp);

    // Print the final counts as per sample output format
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}