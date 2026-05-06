/*Problem: Insert values in a hash table using linear probing and search a key.

Input:
- Table size, number of values n
- n integers
- Key

Output:
- Print index of key, or -1*/
#include <stdio.h>

int main() {
    int size, n, table[100], value, key;

    scanf("%d %d", &size, &n);
    for (int i = 0; i < size; i++) {
        table[i] = -1;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        int index = value % size;
        while (table[index] != -1) {
            index = (index + 1) % size;
        }
        table[index] = value;
    }
    scanf("%d", &key);

    for (int i = 0; i < size; i++) {
        if (table[i] == key) {
            printf("%d", i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
