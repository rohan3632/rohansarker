#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int val, x, found = 0;

    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d", &x);

    // search
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == x) found = 1;
        }
    }

    if (!found)
        printf("will take number");
    else
        printf("will not take number");

    return 0;
}
