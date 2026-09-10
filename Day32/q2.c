/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 32                              Question : 2
 * Date : 10-09-2026
 * PROBLEM STATEMENT : Find the digit that occurs the most times in an integer number.
 * 
 * Sample Test Cases:
 * Input 1:
 * 112233
 * Output 1:
 * 1
 * 
 * Input 2:
 * 887799
 * Output 2:
 * 7
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    long long num;

    if (scanf("%lld", &num) != 1) {
        return 1;
    }

    num = llabs(num); // Handle negative numbers

    int count[10] = {0};

    // Special case for input 0
    if (num == 0) {
        count[0]++;
    }

    // Count frequency of each digit
    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the smallest digit with maximum frequency
    int max_freq = 0;
    int most_frequent_digit = 0;

    for (int i = 0; i <= 9; i++) {
        if (count[i] > max_freq) {
            max_freq = count[i];
            most_frequent_digit = i;
        }
    }

    printf("%d\n", most_frequent_digit);

    return 0;
}