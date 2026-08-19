/*
* Name : Shruti Mittal
* SAP ID : 590036394
* Day : 10      Question : 19
* Date : 19-08-2026
*
* PROBLEM STATEMENT : Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene
*/

#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("Equilateral\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }

    return 0;
}