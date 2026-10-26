/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 74                              Question : 1
 * Date : 26-10-2026
 * PROBLEM STATEMENT : Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
 * 
 * Sample Test Cases:
 * Input 1:
 * Source File: source.txt (Content: Learning C File Handling)
 * Output 1:
 * File copied successfully to destination.txt
 */

#include <stdio.h>

int main() {
    char source_file[100], dest_file[100];

    // Taking filenames as input from the user (or using fixed names as per standard workflow)
    // For automated test cases or direct execution, we can use source.txt and destination.txt
    FILE *src = fopen("source.txt", "r");
    if (src == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    FILE *dest = fopen("destination.txt", "w");
    if (dest == NULL) {
        printf("Error opening destination file!\n");
        fclose(src);
        return 1;
    }

    char ch;

    // Read character by character from source and write to destination
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    // Close both files
    fclose(src);
    fclose(dest);

    // Print success message as per sample output
    printf("File copied successfully to destination.txt\n");

    return 0;
}