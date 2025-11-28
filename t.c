#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a, pri = 0, sec = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a);
            if (i == j) pri += a;
            if (i + j == n - 1) sec += a;
        }
    }

    int diff = primary - secondary;
    if (diff < 0) diff = -diff;

    printf("%d", diff);

    return 0;
}
