/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 39                              Question : 2
 * Date : 17-09-2026
 * PROBLEM STATEMENT : Find the sum of main diagonal elements for a square matrix.
 * 
 * Sample Test Cases:
 * Input 1:
 * 3 3
 * 1 2 3
 * 4 5 6
 * 7 8 9
 * Output 1:
 * 15
 */

#include <stdio.h>

int main() {
    int rows, cols;

    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }

    int matrix[rows][cols];
    long long diagonal_sum = 0;

    // Read elements and sum the main diagonal (where row index == column index)
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                diagonal_sum += matrix[i][j];
            }
        }
    }

    printf("%lld\n", diagonal_sum);

    return 0;
}