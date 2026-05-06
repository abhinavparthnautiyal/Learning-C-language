/*Problem: Print weekday name using enum.

Input:
- Integer from 1 to 7

Output:
- Print weekday name*/
#include <stdio.h>

enum day { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

int main() {
    int choice;

    scanf("%d", &choice);
    switch ((enum day)choice) {
        case MONDAY: printf("Monday"); break;
        case TUESDAY: printf("Tuesday"); break;
        case WEDNESDAY: printf("Wednesday"); break;
        case THURSDAY: printf("Thursday"); break;
        case FRIDAY: printf("Friday"); break;
        case SATURDAY: printf("Saturday"); break;
        case SUNDAY: printf("Sunday"); break;
        default: printf("Invalid");
    }
    return 0;
}
