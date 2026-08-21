/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 12                              Question : 1
 * Date : 21-08-2026
 * PROBLEM STATEMENT : Write a program to calculate library fine based on late days as follows:
 * First 5 days late: ₹2/day
 * Next 5 days late: ₹4/day
 * Next 20 days days late: ₹6/day
 * More than 30 days: Membership Cancelled.
 * 
 * Sample Test Cases:
 * Input 1:
 * 4
 * Output 1:
 * Fine Rs. 8
 * 
 * Input 2:
 * 8
 * Output 2:
 * Fine Rs. 22
 * 
 * Input 3:
 * 15
 * Output 3:
 * Fine Rs.60
 * 
 * Input 4:
 * 31
 * Output 4:
 * Membership Cancelled
 */

#include <stdio.h>

int main() {
    int days;

    if (scanf("%d", &days) != 1) {
        return 1;
    }

    if (days <= 0) {
        printf("Fine Rs. 0\n");
    } 
    else if (days <= 5) {
        int fine = days * 2;
        printf("Fine Rs. %d\n", fine);
    } 
    else if (days <= 10) {
        int fine = (5 * 2) + ((days - 5) * 4);
        printf("Fine Rs. %d\n", fine);
    } 
    else if (days <= 30) {
        int fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Fine Rs. %d\n", fine);
    } 
    else {
        printf("Membership Cancelled\n");
    }

    return 0;
}