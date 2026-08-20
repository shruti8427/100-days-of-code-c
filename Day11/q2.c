/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 11             Question : 2
 * Date : 20-08-2026
 * PROBLEM STATEMENT : Write a program to find profit or loss percentage given cost price and selling price.
 * Sample Test Cases:
 * Input 1:
 * 1000 1200
 * Output 1:
 * Profit 20%
 *
 * Input 2:
 * 1000 800
 * Output 2:
 * Loss 20%
 *
 * Input 3:
 * 1000 1000
 * Output 3:
 * No Profit No Loss
*/

#include <stdio.h>

int main(void) {
    float cp, sp;

    if (scanf("%f %f", &cp, &sp) != 2) {
        return 1;
    }

    if (sp > cp) {
        float profit_percent = ((sp - cp) / cp) * 100;
        printf("Profit %.0f%%\n", profit_percent);
    } else if (cp > sp) {
        float loss_percent = ((cp - sp) / cp) * 100;
        printf("Loss %.0f%%\n", loss_percent);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}