#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a[205];
    for(int i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    int ans = 1000000000;

    for(int i = 0; i < n; i++) {
        int c = 0;
        while(a[i] % 2 == 0) {
            a[i] /= 2;
            c++;
        }
        if(c < ans) ans = c;
    }

    printf("%d\n", ans);
    return 0;
}
