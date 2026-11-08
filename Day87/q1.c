/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 87                              Question : 1
 * Date : 08-11-2026
 * PROBLEM STATEMENT : Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
 * 
 * Sample Test Cases:
 * Input 1:
 * GUEST
 * Output 1:
 * Welcome Guest!
 */

#include <stdio.h>
#include <string.h>

// Define enumeration for user roles
enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    char role_str[20];

    // Taking user role string as input
    if (scanf("%s", role_str) == 1) {
        enum UserRole role;

        // Map input string to the corresponding enum value
        if (strcmp(role_str, "ADMIN") == 0) {
            role = ADMIN;
        } else if (strcmp(role_str, "USER") == 0) {
            role = USER;
        } else if (strcmp(role_str, "GUEST") == 0) {
            role = GUEST;
        } else {
            printf("Invalid role\n");
            return 1;
        }

        // Display message based on the role using switch-case
        switch (role) {
            case ADMIN:
                printf("Welcome Admin!\n");
                break;
            case USER:
                printf("Welcome User!\n");
                break;
            case GUEST:
                printf("Welcome Guest!\n");
                break;
        }
    }

    return 0;
}