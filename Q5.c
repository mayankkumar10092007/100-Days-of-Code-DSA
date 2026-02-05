#include <stdio.h>

int main() {
    int n, m;

    // Input sizes of both logs
    printf("Enter number of entries in server 1 log: ");
    scanf("%d", &n);

    printf("Enter number of entries in server 2 log: ");
    scanf("%d", &m);

    int log1[n], log2[m], merged[n + m];

    // Input first log
    printf("Enter sorted arrival times for server 1:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &log1[i]);
    }

    // Input second log
    printf("Enter sorted arrival times for server 2:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &log2[i]);
    }

    int i = 0, j = 0, k = 0;

    // Merge both logs
    while (i < n && j < m) {
        if (log1[i] <= log2[j]) {
            merged[k++] = log1[i++];
        } else {
            merged[k++] = log2[j++];
        }
    }

    // Copy remaining elements
    while (i < n) {
        merged[k++] = log1[i++];
    }

    while (j < m) {
        merged[k++] = log2[j++];
    }

    // Output merged log
    printf("Merged chronological log:\n");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
