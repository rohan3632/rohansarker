#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char a[110][110];

    for (int i = 0; i < n; i++)
        scanf("%s", a[i]);

    int x, y;
    scanf("%d %d", &x, &y);

    x--;  
    y--;

    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {

            if (i == 0 && j == 0) continue; // skip the cell itself

            int nx = x + i;
            int ny = y + j;

            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (a[nx][ny] != 'x') {
                    printf("no");
                    return 0;
                }
            }
        }
    }

    printf("yes");
    return 0;
}
