/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 38                              Question : 1
 * Date : 16-09-2026
 * PROBLEM STATEMENT : Add two matrices.
 * 
 * Sample Test Cases:
 * Input 1:
 * 2 2
 * 1 2
 * 3 4
 * 2 2
 * 5 6
 * 7 8
 * Output 1:
 * 6 8
 * 10 12
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

    // Matrix addition requires identical dimensions
    if (r1 != r2 || c1 != c2) {
        return 1;
    }

    // Compute and display the sum matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d", matrix1[i][j] + matrix2[i][j]);
            if (j < c1 - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}