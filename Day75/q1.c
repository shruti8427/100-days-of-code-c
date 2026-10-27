/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 75                              Question : 1
 * Date : 27-10-2026
 * PROBLEM STATEMENT : Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
 * 
 * Sample Test Cases:
 * Input 1:
 * Existing File: data.txt (Content before execution: Hello world)
 * User Input: This is appended text.
 * Output 1:
 * File updated successfully with appended text.
 */

#include <stdio.h>

int main() {
    // Open the file in append mode ("a") so existing content is preserved
    FILE *fp = fopen("data.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char text[256];

    // Taking user input for the new line of text
    // fgets is used to handle sentences with spaces properly
    if (fgets(text, sizeof(text), stdin) != NULL) {
        // Append the text to the end of the file
        fprintf(fp, "%s", text);
    }

    // Close the file
    fclose(fp);

    // Print success message as per sample output
    printf("File updated successfully with appended text.\n");

    return 0;
}