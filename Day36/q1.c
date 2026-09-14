/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 36                              Question : 1
 * Date : 14-09-2026
 * PROBLEM STATEMENT : Read and print a matrix.
 * 
 * Sample Test Cases:
 * Input 1:
 * 2 2
 * 1 2
 * 3 4
 * Output 1:
 * 1 2
 * 3 4
 */

#include <stdio.h>

int main() {
    int rows, cols;

    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }

    int matrix[rows][cols];

    // Read the matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d", matrix[i][j]);
            if (j < cols - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}