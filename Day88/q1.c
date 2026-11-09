/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 88                              Question : 1
 * Date : 09-11-2026
 * PROBLEM STATEMENT : Print all enum names and integer values using a loop.
 * 
 * Sample Test Cases:
 * Input 1:
 * No input
 * Output 1:
 * RED=0
 * YELLOW=1
 * GREEN=2
 */

#include <stdio.h>

// Define enumeration for colors
enum Color {
    RED,
    YELLOW,
    GREEN
};

int main() {
    // Array of string literals corresponding to the enum constants for name mapping
    const char *color_names[] = {"RED", "YELLOW", "GREEN"};

    // Loop through the enum integer values and print them with their names
    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", color_names[i], i);
    }

    return 0;
}