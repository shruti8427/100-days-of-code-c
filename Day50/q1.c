/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 50                              Question : 1
 * Date : 28-09-2026
 * PROBLEM STATEMENT : Change the date format from dd/mm/yyyy (numerical month) to dd-MMM-yyyy (abbreviated month).
 * 
 * Sample Test Cases:
 * Input 1:
 * 15/04/2025
 * Output 1:
 * 15-Apr-2025
 */

#include <stdio.h>

int main() {
    int day, month, year;

    // Parse the date components from dd/mm/yyyy format
    if (scanf("%d/%d/%d", &day, &month, &year) != 3) {
        return 0;
    }

    // Array of abbreviated month names
    const char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    // Print in dd-MMM-yyyy format
    if (month >= 1 && month <= 12) {
        printf("%02d-%s-%04d\n", day, months[month - 1], year);
    }

    return 0;
}