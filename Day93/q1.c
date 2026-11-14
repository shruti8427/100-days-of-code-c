/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 93                              Question : 1
 * Date : 14-11-2026
 * PROBLEM STATEMENT : Find and print the student with the highest marks.
 * 
 * Sample Test Cases:
 * Input 1:
 * 3
 * Ravi 101 95
 * Sita 102 85
 * Aman 103 88
 * Output 1:
 * Topper: Ravi (Marks: 95)
 */

#include <stdio.h>

// Define the Student structure
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n;
    // Read the total number of students
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    struct Student students[100];

    // Read details for each student
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    // Assume the first student has the highest marks initially
    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[max_index].marks) {
            max_index = i;
        }
    }

    // Print the topper's details in the specified format
    printf("Topper: %s (Marks: %d)\n", students[max_index].name, students[max_index].marks);

    return 0;
}