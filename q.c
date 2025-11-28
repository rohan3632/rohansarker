#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        long long a[n];
        for (int i = 0; i < n; i++)
            scanf("%lld", &a[i]);

        long long ans = 0;
        long long len = 1;

        for (int i = 1; i < n; i++) {
            if (a[i] >= a[i - 1]) {
                len++;
            } else {
                ans += len * (len + 1) / 2;
                len = 1;
            }
        }

        ans += len * (len + 1) / 2;

        printf("%lld\n", ans);
    }

    return 0;
}
