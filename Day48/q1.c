/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 48                              Question : 1
 * Date : 26-09-2026
 * PROBLEM STATEMENT : Check if one string is a rotation of another.
 * 
 * Sample Test Cases:
 * Input 1:
 * abcde
 * deabc
 * Output 1:
 * Rotation
 * 
 * Input 2:
 * abc
 * acb
 * Output 2:
 * Not rotation
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

    // Read second string (space before %[^\n] skips trailing newline)
    if (scanf(" %[^\n]", str2) != 1) {
        return 0;
    }

    int len1 = 0, len2 = 0;

    // Calculate lengths manually
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    // Strings must be of equal length to be rotations of each other
    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    // Concatenate str1 with itself into a temp buffer
    char temp[2000];
    for (int i = 0; i < len1; i++) {
        temp[i] = str1[i];
        temp[i + len1] = str1[i];
    }
    temp[2 * len1] = '\0';

    // Check if str2 is a substring of concatenated temp string
    bool is_rotation = false;
    for (int i = 0; i <= len1; i++) {
        bool match = true;
        for (int j = 0; j < len2; j++) {
            if (temp[i + j] != str2[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            is_rotation = true;
            break;
        }
    }

    if (is_rotation) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}