/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 40                              Question : 1
 * Date : 18-09-2026
 * PROBLEM STATEMENT : Perform diagonal traversal of a matrix.
 * 
 * Sample Test Cases:
 * Input 1:
 * 3 3
 * 1 2 3
 * 4 5 6
 * 7 8 9
 * Output 1:
 * 1 2 4 7 5 3 6 8 9
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

    int total_elements = rows * cols;
    int result[total_elements];
    int index = 0;

    int r = 0, c = 0;
    bool going_up = true;

    // Perform zigzag diagonal traversal
    while (index < total_elements) {
        result[index++] = matrix[r][c];

        if (going_up) {
            if (c == cols - 1) {
                // Hitting right boundary: move down and flip direction
                r++;
                going_up = false;
            } else if (r == 0) {
                // Hitting top boundary: move right and flip direction
                c++;
                going_up = false;
            } else {
                // Moving diagonally up-right
                r--;
                c++;
            }
        } else {
            if (r == rows - 1) {
                // Hitting bottom boundary: move right and flip direction
                c++;
                going_up = true;
            } else if (c == 0) {
                // Hitting left boundary: move down and flip direction
                r++;
                going_up = true;
            } else {
                // Moving diagonally down-left
                r++;
                c--;
            }
        }
    }

    // Output space-separated diagonal traversal
    for (int i = 0; i < total_elements; i++) {
        printf("%d", result[i]);
        if (i < total_elements - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}