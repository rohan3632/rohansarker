#include <stdio.h>
#include <stdlib.h>

int cmp_ll(const void *a, const void *b) {
    long long x = *(const long long *)a;
    long long y = *(const long long *)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int main() {
    int N, Q;
    if (scanf("%d %d", &N, &Q) != 2) return 0;

    long long *A = (long long *)malloc(N * sizeof(long long));
    if (!A) return 0;

    for (int i = 0; i < N; ++i) {
        scanf("%lld", &A[i]);
    }

    qsort(A, N, sizeof(long long), cmp_ll);

    while (Q--) {
        long long x;
        scanf("%lld", &x);

        int l = 0, r = N - 1;
        int found = 0;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (A[mid] == x) {
                found = 1;
                break;
            } else if (A[mid] < x) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        if (found)
            printf("found\n");
        else
            printf("not found\n");
    }

    free(A);
    return 0;
}
