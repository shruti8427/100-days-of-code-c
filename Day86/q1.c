/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 86                              Question : 1
 * Date : 07-11-2026
 * PROBLEM STATEMENT : Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
 * 
 * Sample Test Cases:
 * Input 1:
 * ADD 10 20
 * Output 1:
 * 30
 */

#include <stdio.h>
#include <string.h>

// Define enumeration for menu choices
enum MenuChoice {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char choice_str[20];
    int a, b;

    // Taking menu choice string and two numbers as input
    if (scanf("%s %d %d", choice_str, &a, &b) == 3) {
        enum MenuChoice choice;

        // Map input string to the corresponding enum value
        if (strcmp(choice_str, "ADD") == 0) {
            choice = ADD;
        } else if (strcmp(choice_str, "SUBTRACT") == 0) {
            choice = SUBTRACT;
        } else if (strcmp(choice_str, "MULTIPLY") == 0) {
            choice = MULTIPLY;
        } else {
            printf("Invalid menu choice\n");
            return 1;
        }

        // Perform operation using switch-case on the enum value
        switch (choice) {
            case ADD:
                printf("%d\n", a + b);
                break;
            case SUBTRACT:
                printf("%d\n", a - b);
                break;
            case MULTIPLY:
                printf("%d\n", a * b);
                break;
        }
    }

    return 0;
}