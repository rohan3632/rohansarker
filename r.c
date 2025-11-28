#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n], b[n];

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    qsort(a, n, sizeof(int), cmp);
    qsort(b, n, sizeof(int), cmp);

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            printf("no\n");
            return 0;
        }
    }

    printf("yes\n");
    return 0;
}
