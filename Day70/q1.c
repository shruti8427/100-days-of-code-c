/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 70                              Question : 1
 * Date : 22-10-2026
 * PROBLEM STATEMENT : Write a program to take a string input. Change it to sentence case.
 * 
 * Sample Test Cases:
 * Input 1:
 * str = I am trying to build logic.
 * Output 1:
 * I Am Trying To Build Logic
 * 
 * Input 2:
 * str = The classes are supposed to start early.
 * Output 2:
 * The Classes Are Supposed To Start Early.
 * 
 * Input 3:
 * str = We are going to look at 26 different test cases.
 * Output 3:
 * We Are Going To Look At 26 Different Test Cases.
 */

#include <stdio.h>

// Function to convert string to sentence/title case (capitalizing the first letter of each word)
void to_sentence_case(char *str) {
    int capitalize_next = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r') {
            capitalize_next = 1;
        } else if (capitalize_next) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32; // Convert to uppercase
            }
            capitalize_next = 0;
        }
    }
}

int main() {
    char str[1000];

    // Read string input including spaces
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // Remove trailing newline character if present
        int i = 0;
        while (str[i] != '\0') {
            if (str[i] == '\n' || str[i] == '\r') {
                str[i] = '\0';
                break;
            }
            i++;
        }

        to_sentence_case(str);
        printf("%s\n", str);
    }

    return 0;
}