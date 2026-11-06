/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 85                              Question : 1
 * Date : 06-11-2026
 * PROBLEM STATEMENT : Assign explicit values starting from 10 and print them.
 * 
 * Sample Test Cases:
 * Input 1:
 * No input
 * Output 1:
 * A=10
 * B=11
 * C=12
 */

#include <stdio.h>

// Define enumeration with explicit values starting from 10
enum Letters {
    A = 10,
    B,    // Automatically becomes 11
    C     // Automatically becomes 12
};

int main() {
    // Print each enum constant with its explicit/sequential integer value
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);

    return 0;
}