/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 89                              Question : 1
 * Date : 10-11-2026
 * PROBLEM STATEMENT : Show that enums store integers by printing assigned values.
 * 
 * Sample Test Cases:
 * Input 1:
 * No input
 * Output 1:
 * SUCCESS=0, FAILURE=1, TIMEOUT=2
 */

#include <stdio.h>

// Define enumeration for status codes
enum Status {
    SUCCESS,  // Automatically assigned 0
    FAILURE,  // Automatically assigned 1
    TIMEOUT   // Automatically assigned 2
};

int main() {
    // Print the enum constants directly as integers using %d format specifier
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);

    return 0;
}