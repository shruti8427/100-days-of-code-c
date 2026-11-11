/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 90                              Question : 1
 * Date : 11-11-2026
 * PROBLEM STATEMENT : Define a struct with enum Gender and print person's gender.
 * 
 * Sample Test Cases:
 * Input 1:
 * Gender=MALE
 * Output 1:
 * Male
 */

#include <stdio.h>
#include <string.h>

// Define enumeration for Gender
enum GenderType {
    MALE,
    FEMALE,
    OTHER
};

// Define a struct that includes the enum GenderType
struct Person {
    enum GenderType gender;
};

int main() {
    char input[30];

    // Taking input in the format "Gender=MALE"
    if (scanf("%s", input) == 1) {
        // Extracting the value part after '='
        char *token = strchr(input, '=');
        char *val = (token != NULL) ? token + 1 : input;

        struct Person p;

        // Map input string to the corresponding enum value inside the struct
        if (strcmp(val, "MALE") == 0) {
            p.gender = MALE;
        } else if (strcmp(val, "FEMALE") == 0) {
            p.gender = FEMALE;
        } else {
            p.gender = OTHER;
        }

        // Print person's gender based on the struct member value
        switch (p.gender) {
            case MALE:
                printf("Male\n");
                break;
            case FEMALE:
                printf("Female\n");
                break;
            case OTHER:
                printf("Other\n");
                break;
        }
    }

    return 0;
}