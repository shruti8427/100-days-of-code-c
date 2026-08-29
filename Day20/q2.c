/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 20                              Question : 2
 * Date : 29-08-2026
 * PROBLEM STATEMENT : Write a program to find the 1’s complement of a binary number and print it.
 * 
 * Sample Test Cases:
 * Input 1:
 * 1010
 * Output 1:
 * 0101
 * 
 * Input 2:
 * 1111
 * Output 2:
 * 0000
 */

#include <stdio.h>

int main() {
    char binary[100];

    if (scanf("%s", binary) != 1) {
        return 1;
    }

    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        }
    }

    printf("%s\n", binary);

    return 0;
}