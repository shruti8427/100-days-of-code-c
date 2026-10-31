/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 79                              Question : 1
 * Date : 31-10-2026
 * PROBLEM STATEMENT : A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
 * 
 * Sample Test Cases:
 * Input 1:
 * File: numbers.txt (Content: 10 20 30 40 50)
 * Output 1:
 * Sum = 150
 * Average = 30.00
 */

#include <stdio.h>

int main() {
    // Open numbers.txt in read mode ("r")
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int num;
    int sum = 0;
    int count = 0;

    // Read integers one by one until EOF is reached
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    // Close the file
    fclose(fp);

    // Compute average if count is greater than zero to avoid division by zero
    float average = 0.0;
    if (count > 0) {
        average = (float)sum / count;
    }

    // Print the final sum and average as per sample output format
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}