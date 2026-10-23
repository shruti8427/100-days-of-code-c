/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 71                              Question : 1
 * Date : 23-10-2026
 * PROBLEM STATEMENT : Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
 * 
 * Sample Test Cases:
 * Input 1:
 * Name: Rahul, Age: 23
 * Output 1:
 * File created successfully! Data written to info.txt
 */

#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char name[100];
    int age;

    if (scanf("%s %d", name, &age) == 2) {
        fprintf(fp, "Name: %s, Age: %d\n", name, age);
    }

    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}