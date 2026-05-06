/*Problem: Find the next date.

Input:
- Day month year

Output:
- Print next date*/
#include <stdio.h>

int leap_year(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main() {
    int day, month, year;
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    scanf("%d %d %d", &day, &month, &year);
    if (leap_year(year)) {
        days_in_month[2] = 29;
    }

    day++;
    if (day > days_in_month[month]) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }

    printf("%02d %02d %04d", day, month, year);
    return 0;
}
