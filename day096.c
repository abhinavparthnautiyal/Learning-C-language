/*Problem: Count number of inversions using modified merge sort.
An inversion exists if i < j and a[i] > a[j].

Input:
- First line: integer n
- Second line: n integers

Output:
- Print the number of inversions*/
#include <stdio.h>

long merge(int arr[], int temp[], int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;
    long inversions = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inversions += mid - i + 1;
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }
    while (j <= right) {
        temp[k++] = arr[j++];
    }
    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }

    return inversions;
}

long count_inversions(int arr[], int temp[], int left, int right) {
    long inversions = 0;

    if (left < right) {
        int mid = left + (right - left) / 2;
        inversions += count_inversions(arr, temp, left, mid);
        inversions += count_inversions(arr, temp, mid + 1, right);
        inversions += merge(arr, temp, left, mid, right);
    }

    return inversions;
}

int main() {
    int n, arr[10000], temp[10000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%ld", count_inversions(arr, temp, 0, n - 1));
    return 0;
}
