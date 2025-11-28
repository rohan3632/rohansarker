#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int f[m+1];
    for (int i = 1; i <= m; i++)
        f[i] = 0;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        f[x]++;
    }

    for (int i = 1; i <= m; i++)
        printf("%d\n", f[i]);

    return 0;
}
