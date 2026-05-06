/*Problem: Given a target distance and cars' positions and speeds, compute the
number of car fleets reaching the destination.
Sort cars by position in descending order and calculate time to reach target.

Input:
- First line: target and number of cars n
- Next n lines: position and speed

Output:
- Print number of car fleets*/
#include <stdio.h>
#include <stdlib.h>

struct car {
    int position;
    int speed;
};

int compare_cars(const void *a, const void *b) {
    const struct car *x = (const struct car *)a;
    const struct car *y = (const struct car *)b;

    return y->position - x->position;
}

int main() {
    int target, n, fleets = 0;
    double slowest_time = 0.0;
    struct car cars[10000];

    scanf("%d %d", &target, &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &cars[i].position, &cars[i].speed);
    }

    qsort(cars, n, sizeof(struct car), compare_cars);

    for (int i = 0; i < n; i++) {
        double time = (target - cars[i].position) / (double)cars[i].speed;
        if (time > slowest_time) {
            fleets++;
            slowest_time = time;
        }
    }

    printf("%d", fleets);
    return 0;
}
