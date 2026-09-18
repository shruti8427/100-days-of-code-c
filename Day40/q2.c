/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 40                              Question : 2
 * Date : 18-09-2026
 * PROBLEM STATEMENT : Multiply two matrices.
 * 
 * Sample Test Cases:
 * Input 1:
 * 2 3
 * 1 2 3
 * 4 5 6
 * 3 2
 * 7 8
 * 9 10
 * 11 12
 * Output 1:
 * 58 64
 * 139 154
 */

#include <stdio.h>

int main() {
    int r1, c1;

    // Read dimensions for the first matrix
    if (scanf("%d %d", &r1, &c1) != 2 || r1 <= 0 || c1 <= 0) {
        return 1;
    }

    int matrix1[r1][c1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    int r2, c2;

    // Read dimensions for the second matrix
    if (scanf("%d %d", &r2, &c2) != 2 || r2 <= 0 || c2 <= 0) {
        return 1;
    }

    int matrix2[r2][c2];
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Matrix multiplication requires c1 == r2
    if (c1 != r2) {
        return 1;
    }

    int result[r1][c2];

    // Compute matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d", result[i][j]);
            if (j < c2 - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}