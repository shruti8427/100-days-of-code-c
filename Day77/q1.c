/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 77                              Question : 1
 * Date : 29-10-2026
 * PROBLEM STATEMENT : Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
 * 
 * Sample Test Cases:
 * Input 1:
 * Input File (input.txt): Hello World\nC programming
 * Output 1:
 * Output File (output.txt): HELLO WORLD\nC PROGRAMMING
 */

#include <stdio.h>
#include <ctype.h>

int main() {
    // Open input.txt in read mode ("r")
    FILE *src = fopen("input.txt", "r");
    if (src == NULL) {
        printf("Error opening input file!\n");
        return 1;
    }

    // Open output.txt in write mode ("w")
    FILE *dest = fopen("output.txt", "w");
    if (dest == NULL) {
        printf("Error opening output file!\n");
        fclose(src);
        return 1;
    }

    char ch;

    // Read character by character from input.txt until EOF
    while ((ch = fgetc(src)) != EOF) {
        // Convert lowercase to uppercase using toupper() and write to output.txt
        fputc(toupper(ch), dest);
    }

    // Close both files
    fclose(src);
    fclose(dest);

    printf("File contents successfully converted to uppercase and written to output.txt\n");

    return 0;
}