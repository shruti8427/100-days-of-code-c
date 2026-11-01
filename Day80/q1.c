/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 80                              Question : 1
 * Date : 01-11-2026
 * PROBLEM STATEMENT : Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
 * 
 * Sample Test Cases:
 * Input 1:
 * Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
 * Output 1:
 * Name: Asha | Roll: 101 | Marks: 85
 * Name: Ravi | Roll: 102 | Marks: 92
 */

#include <stdio.h>

int main() {
    // Step 1: Open file in write mode ("w") to store student records using fprintf()
    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Writing sample student records to the file
    fprintf(fp, "Asha 101 85\n");
    fprintf(fp, "Ravi 102 92\n");

    // Close the file after writing
    fclose(fp);

    // Step 2: Open the same file in read mode ("r") to read records using fscanf()
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    char name[50];
    int roll;
    int marks;

    // Read records line by line using fscanf() until EOF
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        // Display each record in the specified output format
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    // Close the file after reading
    fclose(fp);

    return 0;
}