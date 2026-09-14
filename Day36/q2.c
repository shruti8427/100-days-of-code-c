/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 36                              Question : 2
 * Date : 14-09-2026
 * PROBLEM STATEMENT : Find the sum of all elements in a matrix.
 * 
 * Sample Test Cases:
 * Input 1:
 * 2 3
 * 1 2 3
 * 4 5 6
 * Output 1:
 * 21
 */

#include <stdio.h>

int main() {
    int rows, cols;

    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }

    int matrix[rows][cols];
    long long sum = 0;

    // Read elements and calculate cumulative sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("%lld\n", sum);

    return 0;
}