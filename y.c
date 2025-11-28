#include <stdio.h>

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    long long a[n+1], pre[n+1];
    pre[0] = 0;

    for(int i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
        pre[i] = pre[i-1] + a[i];
    }

    while(q--) {
        int l, r;
        scanf("%d %d", &l, &r);
        printf("%lld\n", pre[r] - pre[l-1]);
    }

    return 0;
}
