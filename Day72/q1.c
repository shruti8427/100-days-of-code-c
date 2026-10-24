/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 72                              Question : 1
 * Date : 24-10-2026
 * PROBLEM STATEMENT : Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
 * 
 * Sample Test Cases:
 * Input 1:
 * File: info.txt (Content: Name: Rahul\nAge: 23)
 * Output 1:
 * Name: Rahul
 * Age: 23
 */

#include <stdio.h>

int main() {
    // Open info.txt in read mode ("r")
    FILE *fp = fopen("info.txt", "r");

    // Check if the file opened successfully
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char buffer[256];

    // Read line by line using fgets() until End Of File (EOF)
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(fp);

    return 0;
}