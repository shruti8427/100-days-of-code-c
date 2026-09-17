/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 39                              Question : 1
 * Date : 17-09-2026
 * PROBLEM STATEMENT : Check if the elements on the diagonal of a matrix are distinct.
 * 
 * Sample Test Cases:
 * Input 1:
 * 3 3
 * 1 2 3
 * 4 5 6
 * 7 8 1
 * Output 1:
 * False
 * 
 * Input 2:
 * 3 3
 * 1 2 3
 * 4 5 6
 * 7 8 9
 * Output 2:
 * True
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

    bool is_distinct = true;

    // Check primary diagonal elements (matrix[i][i]) for duplicates
    int min_dim = (rows < cols) ? rows : cols;
    for (int i = 0; i < min_dim; i++) {
        for (int j = i + 1; j < min_dim; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                is_distinct = false;
                break;
            }
        }
        if (!is_distinct) {
            break;
        }
    }

    if (is_distinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}