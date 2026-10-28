/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 76                              Question : 1
 * Date : 28-10-2026
 * PROBLEM STATEMENT : Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
 * 
 * Sample Test Cases:
 * Input 1:
 * Filename: sample.txt (File Exists: Yes)
 * Output 1:
 * File opened successfully.
 * (Displays file content)
 * 
 * Input 2:
 * Filename: nofile.txt (File Exists: No)
 * Output 2:
 * Error: File does not exist!
 */

#include <stdio.h>

int main() {
    char filename[100];

    // Taking filename as input from the user
    if (scanf("%s", filename) != 1) {
        return 1;
    }

    // Try opening the file in read mode ("r")
    FILE *fp = fopen(filename, "r");

    // Check if the file pointer is NULL (file does not exist)
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    // If file exists, print success message
    printf("File opened successfully.\n");

    char buffer[256];
    // Read and display its content line by line
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(fp);

    return 0;
}