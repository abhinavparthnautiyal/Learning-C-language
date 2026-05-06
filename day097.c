/*Problem: Given meeting intervals, find minimum number of rooms required.
Sort by start time and use a min-heap on end times.

Input:
- First line: integer n
- Next n lines: start time and end time

Output:
- Print minimum number of meeting rooms required*/
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

void heap_push(int heap[], int *size, int value) {
    int i = (*size)++;
    heap[i] = value;

    while (i > 0) {
        int parent = (i - 1) / 2;
        if (heap[parent] <= heap[i]) {
            break;
        }
        int temp = heap[parent];
        heap[parent] = heap[i];
        heap[i] = temp;
        i = parent;
    }
}

void heap_pop(int heap[], int *size) {
    int i = 0;
    heap[0] = heap[--(*size)];

    while (1) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int smallest = i;

        if (left < *size && heap[left] < heap[smallest]) {
            smallest = left;
        }
        if (right < *size && heap[right] < heap[smallest]) {
            smallest = right;
        }
        if (smallest == i) {
            break;
        }

        int temp = heap[i];
        heap[i] = heap[smallest];
        heap[smallest] = temp;
        i = smallest;
    }
}

int main() {
    int n, heap[10000], heap_size = 0, rooms = 0;
    struct interval meetings[10000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &meetings[i].start, &meetings[i].end);
    }

    if (n == 0) {
        printf("0");
        return 0;
    }

    qsort(meetings, n, sizeof(struct interval), compare_intervals);
    for (int i = 0; i < n; i++) {
        while (heap_size > 0 && heap[0] <= meetings[i].start) {
            heap_pop(heap, &heap_size);
        }
        heap_push(heap, &heap_size, meetings[i].end);
        if (heap_size > rooms) {
            rooms = heap_size;
        }
    }

    printf("%d", rooms);
    return 0;
}
