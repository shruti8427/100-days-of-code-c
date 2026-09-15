/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 37                              Question : 1
 * Date : 15-09-2026
 * PROBLEM STATEMENT : Find the sum of each row of a matrix and store it in an array.
 * 
 * Sample Test Cases:
 * Input 1:
 * 2 3
 * 1 2 3
 * 4 5 6
 * Output 1:
 * 6 15
 */

#include <stdio.h>

int main() {
    int rows, cols;

    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }

    int matrix[rows][cols];
    int row_sums[rows];

    // Read matrix elements and compute sum for each row
    for (int i = 0; i < rows; i++) {
        int current_row_sum = 0;
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            current_row_sum += matrix[i][j];
        }
        row_sums[i] = current_row_sum;
    }

    // Print row sums
    for (int i = 0; i < rows; i++) {
        printf("%d", row_sums[i]);
        if (i < rows - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}