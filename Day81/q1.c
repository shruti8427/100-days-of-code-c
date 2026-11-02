/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 81                              Question : 1
 * Date : 02-11-2026
 * PROBLEM STATEMENT : Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
 * 
 * Sample Test Cases:
 * Input 1:
 * No input
 * Output 1:
 * SUNDAY = 0
 * MONDAY = 1
 * TUESDAY = 2
 * WEDNESDAY = 3
 * THURSDAY = 4
 * FRIDAY = 5
 * SATURDAY = 6
 */

#include <stdio.h>

// Define enumeration for days of the week
// By default, the first element starts at 0 and subsequent elements increment by 1
enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    // Print each day along with its respective integer value
    printf("SUNDAY = %d\n", SUNDAY);
    printf("MONDAY = %d\n", MONDAY);
    printf("TUESDAY = %d\n", TUESDAY);
    printf("WEDNESDAY = %d\n", WEDNESDAY);
    printf("THURSDAY = %d\n", THURSDAY);
    printf("FRIDAY = %d\n", FRIDAY);
    printf("SATURDAY = %d\n", SATURDAY);

    return 0;
}