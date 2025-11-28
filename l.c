#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);

        int a[105];
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for(int i = 0; i < n; i++) {
            int mx = a[i];
            for(int j = i; j < n; j++) {
                if(a[j] > mx) mx = a[j];
                printf("%d ", mx);
            }
        }
        printf("\n");
    }

    return 0;
}
