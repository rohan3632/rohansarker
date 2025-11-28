    #include <stdio.h>
     
    int main() {
        int n;
        scanf("%d", &n);
     
        int a, primary = 0, secondary = 0;
     
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &a);
                if (i == j) primary += a;
                if (i + j == n - 1) secondary += a;
            }
        }
     
        int diff = primary - secondary;
        if (diff < 0) diff = -diff;
     
        printf("%d", diff);
     
        return 0;
    }

