/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 83                              Question : 1
 * Date : 04-11-2026
 * PROBLEM STATEMENT : Create an enum for months and print how many days each month has.
 * 
 * Sample Test Cases:
 * Input 1:
 * FEB
 * Output 1:
 * 28 or 29 days
 */

#include <stdio.h>
#include <string.h>

// Define enumeration for months of the year
enum Month {
    JAN, FEB, MAR, APR, MAY, JUN, 
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    char month_str[10];

    // Taking month string as input from the user
    if (scanf("%s", month_str) == 1) {
        enum Month m;

        // Map input string to the corresponding enum value
        if (strcmp(month_str, "JAN") == 0) m = JAN;
        else if (strcmp(month_str, "FEB") == 0) m = FEB;
        else if (strcmp(month_str, "MAR") == 0) m = MAR;
        else if (strcmp(month_str, "APR") == 0) m = APR;
        else if (strcmp(month_str, "MAY") == 0) m = MAY;
        else if (strcmp(month_str, "JUN") == 0) m = JUN;
        else if (strcmp(month_str, "JUL") == 0) m = JUL;
        else if (strcmp(month_str, "AUG") == 0) m = AUG;
        else if (strcmp(month_str, "SEP") == 0) m = SEP;
        else if (strcmp(month_str, "OCT") == 0) m = OCT;
        else if (strcmp(month_str, "NOV") == 0) m = NOV;
        else if (strcmp(month_str, "DEC") == 0) m = DEC;
        else {
            printf("Invalid month input\n");
            return 1;
        }

        // Use switch-case on the enum value to print the number of days
        switch (m) {
            case JAN:
            case MAR:
            case MAY:
            case JUL:
            case AUG:
            case OCT:
            case DEC:
                printf("31 days\n");
                break;
            case APR:
            case JUN:
            case SEP:
            case NOV:
                printf("30 days\n");
                break;
            case FEB:
                printf("28 or 29 days\n");
                break;
        }
    }

    return 0;
}