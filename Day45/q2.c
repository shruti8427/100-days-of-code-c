/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 45                              Question : 2
 * Date : 23-09-2026
 * PROBLEM STATEMENT : Toggle case of each character in a string.
 * 
 * Sample Test Cases:
 * Input 1:
 * Hello
 * Output 1:
 * hELLO
 */

#include <stdio.h>

int main() {
    char str[1000];

    // Read full string including spaces until newline
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }

    // Traverse string and toggle case for alphabetic characters
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert lowercase to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Convert uppercase to lowercase
        }
    }

    printf("%s\n", str);

    return 0;
}