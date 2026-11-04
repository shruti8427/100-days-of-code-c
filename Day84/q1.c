/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 84                              Question : 1
 * Date : 05-11-2026
 * PROBLEM STATEMENT : Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
 * 
 * Sample Test Cases:
 * Input 1:
 * FAILURE
 * Output 1:
 * Operation failed
 */

#include <stdio.h>
#include <string.h>

// Define enumeration for operation status
enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    char input[20];

    // Taking status string as input from the user
    if (scanf("%s", input) == 1) {
        enum Status stat;

        // Map input string to the corresponding enum value
        if (strcmp(input, "SUCCESS") == 0) {
            stat = SUCCESS;
        } else if (strcmp(input, "FAILURE") == 0) {
            stat = FAILURE;
        } else if (strcmp(input, "TIMEOUT") == 0) {
            stat = TIMEOUT;
        } else {
            printf("Invalid status\n");
            return 1;
        }

        // Use switch-case on the enum value to print the appropriate message
        switch (stat) {
            case SUCCESS:
                printf("Operation successful\n");
                break;
            case FAILURE:
                printf("Operation failed\n");
                break;
            case TIMEOUT:
                printf("Operation timed out\n");
                break;
        }
    }

    return 0;
}