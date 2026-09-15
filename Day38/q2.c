/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 38                              Question : 2
 * Date : 16-09-2026
 * PROBLEM STATEMENT : Check if a matrix is symmetric.
 * 
 * Sample Test Cases:
 * Input 1:
 * 2 2
 * 1 2
 * 2 1
 * Output 1:
 * True
 * 
 * Input 2:
 * 2 2
 * 1 0
 * 2 1
 * Output 2:
 * False
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;

    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }

    int matrix[rows][cols];

    // Read matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // A matrix must be square (rows == cols) to be symmetric
    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    bool is_symmetric = true;

    // Check if matrix[i][j] == matrix[j][i]
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = false;
                break;
            }
        }
        if (!is_symmetric) {
            break;
        }
    }

    if (is_symmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}