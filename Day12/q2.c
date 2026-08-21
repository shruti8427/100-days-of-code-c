/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 12                              Question : 2
 * Date : 21-08-2026
 * PROBLEM STATEMENT : Write a program to calculate electricity bill based on units consumed with these rates:
 * First 100 units at Rs. 5/unit
 * Next 100 units at Rs. 7/unit
 * Next 100 units at Rs. 10/unit
 * Above at Rs. 12/unit
 * 
 * Sample Test Cases:
 * Input 1:
 * 50
 * Output 1:
 * Bill: Rs. 250
 * 
 * Input 2:
 * 150
 * Output 2:
 * Bill: Rs. 850
 * 
 * Input 3:
 * 250
 * Output 3:
 * Bill: Rs. 1700
 */

#include <stdio.h>

int main() {
    int units;
    int bill = 0;

    if (scanf("%d", &units) != 1) {
        return 1;
    }

    if (units <= 0) {
        bill = 0;
    } 
    else if (units <= 100) {
        bill = units * 5;
    } 
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    } 
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } 
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    printf("Bill: Rs. %d\n", bill);

    return 0;
}