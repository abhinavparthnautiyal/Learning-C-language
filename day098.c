/*Problem: Given intervals, merge all overlapping ones.
Sort first, then compare with the previous merged interval.

Input:
- First line: integer n
- Next n lines: start and end of interval

Output:
- Print merged intervals, one per line*/
#include <stdio.h>
#include <stdlib.h>

struct interval {
    int start;
    int end;
};

int compare_intervals(const void *a, const void *b) {
    const struct interval *x = (const struct interval *)a;
    const struct interval *y = (const struct interval *)b;

    if (x->start != y->start) {
        return x->start - y->start;
    }
    return x->end - y->end;
}

int main() {
    int n;
    struct interval intervals[10000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &intervals[i].start, &intervals[i].end);
    }

    if (n == 0) {
        return 0;
    }

    qsort(intervals, n, sizeof(struct interval), compare_intervals);

    int current_start = intervals[0].start;
    int current_end = intervals[0].end;

    for (int i = 1; i < n; i++) {
        if (intervals[i].start <= current_end) {
            if (intervals[i].end > current_end) {
                current_end = intervals[i].end;
            }
        } else {
            printf("%d %d\n", current_start, current_end);
            current_start = intervals[i].start;
            current_end = intervals[i].end;
        }
    }

    printf("%d %d", current_start, current_end);
    return 0;
}
