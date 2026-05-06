/*Problem: For each element, count how many smaller elements appear on right side.
Use merge sort technique.

Input:
- First line: integer n
- Second line: n integers

Output:
- Print the count for each element*/
#include <stdio.h>

struct item {
    int value;
    int index;
};

void merge(struct item arr[], struct item temp[], int counts[], int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;
    int right_smaller = 0;

    while (i <= mid && j <= right) {
        if (arr[i].value <= arr[j].value) {
            counts[arr[i].index] += right_smaller;
            temp[k++] = arr[i++];
        } else {
            right_smaller++;
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        counts[arr[i].index] += right_smaller;
        temp[k++] = arr[i++];
    }
    while (j <= right) {
        temp[k++] = arr[j++];
    }
    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }
}

void count_smaller(struct item arr[], struct item temp[], int counts[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        count_smaller(arr, temp, counts, left, mid);
        count_smaller(arr, temp, counts, mid + 1, right);
        merge(arr, temp, counts, left, mid, right);
    }
}

int main() {
    int n, counts[10000] = {0};
    struct item arr[10000], temp[10000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i].value);
        arr[i].index = i;
    }

    count_smaller(arr, temp, counts, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", counts[i]);
    }
    return 0;
}
