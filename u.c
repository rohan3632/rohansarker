#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n], b[m];

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);

    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] == b[j]) j++;
        i++;
    }

    if (j == m)
        printf("YES");
    else
        printf("NO");

    return 0;
}
