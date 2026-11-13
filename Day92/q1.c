/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 92                              Question : 1
 * Date : 13-11-2026
 * PROBLEM STATEMENT : Store details of 5 students in an array of structures and print all.
 * 
 * Sample Test Cases:
 * Input 1:
 * Details of 5 students (Name, Roll, Marks)
 * Output 1:
 * Tabular list of all 5 students with their details
 */

#include <stdio.h>

// Define the Student structure
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5];

    // Reading details for 5 students using a loop
    for (int i = 0; i < 5; i++) {
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    // Printing the details of all 5 students
    for (int i = 0; i < 5; i++) {
        printf("Name: %s | Roll: %d | Marks: %d\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}