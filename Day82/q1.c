/*
 * Name : Shruti Mittal
 * SAP ID : 590036394
 * Day : 82                              Question : 1
 * Date : 03-11-2026
 * PROBLEM STATEMENT : Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
 * 
 * Sample Test Cases:
 * Input 1:
 * GREEN
 * Output 1:
 * Go
 */

#include <stdio.h>
#include <string.h>

// Define enumeration for traffic lights
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char color[20];

    // Taking traffic light color as input
    if (scanf("%s", color) == 1) {
        enum TrafficLight light;

        // Map input string to the corresponding enum value
        if (strcmp(color, "RED") == 0) {
            light = RED;
        } else if (strcmp(color, "YELLOW") == 0) {
            light = YELLOW;
        } else if (strcmp(color, "GREEN") == 0) {
            light = GREEN;
        } else {
            printf("Invalid input\n");
            return 1;
        }

        // Use switch-case on the enum value to print the appropriate instruction
        switch (light) {
            case RED:
                printf("Stop\n");
                break;
            case YELLOW:
                printf("Wait\n");
                break;
            case GREEN:
                printf("Go\n");
                break;
        }
    }

    return 0;
}