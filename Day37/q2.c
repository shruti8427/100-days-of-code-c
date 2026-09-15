/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 37                              Question : 2
 * Date : 15-09-2026
 * PROBLEM STATEMENT : Find the transpose of a matrix.
 * 
 * Sample Test Cases:
 * Input 1:
 * 2 3
 * 1 2 3
 * 4 5 6
 * Output 1:
 * 1 4
 * 2 5
 * 3 6
 */

#include <stdio.h>

int main() {
    int rows, cols;

    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }

    int matrix[rows][cols];

    // Read the input matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int transpose[cols][rows];

    // Compute the transpose by swapping indices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the transposed matrix
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d", transpose[j][i]);
            if (i < rows - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}