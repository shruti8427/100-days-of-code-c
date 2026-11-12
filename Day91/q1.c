/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 91                              Question : 1
 * Date : 12-11-2026
 * PROBLEM STATEMENT : Define a structure Student with name, roll_no, and marks, then read and print one student's data.
 * 
 * Sample Test Cases:
 * Input 1:
 * Name: Asha
 * Roll: 101
 * Marks: 90
 * Output 1:
 * Name: Asha | Roll: 101 | Marks: 90
 */

#include <stdio.h>

// Define the Student structure
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;

    // Reading inputs matching the labeled format
    scanf("Name: %s", s.name);
    scanf("Roll: %d", &s.roll_no);
    scanf("Marks: %d", &s.marks);

    // Printing the student's data in the specified output format
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);

    return 0;
}