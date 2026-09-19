/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 41                              Question : 1
 * Date : 19-09-2026
 * PROBLEM STATEMENT : Count characters in a string without using built-in length functions.
 * 
 * Sample Test Cases:
 * Input 1:
 * Hello
 * Output 1:
 * 5
 * 
 * Input 2:
 *  
 * Output 2:
 * 1
 */

#include <stdio.h>

int main() {
    char str[1000];

    // Read input including spaces up to newline
    if (scanf("%[^\n]", str) != 1) {
        // If empty input or EOF encountered
        return 0;
    }

    int count = 0;

    // Iterate through string until null terminator is reached
    while (str[count] != '\0') {
        count++;
    }

    printf("%d\n", count);

    return 0;
}