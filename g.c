#include<stdio.h>

int main(){
    int n, check = 1;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    n = n-1;
    for (int i = 0; i <= n/2; i++)
    {
        if (arr[i] != arr[n - i])
        {
            check = 0;
            break;
        }
    }
    printf("%s\n", (check) ? "YES" : "NO");
    return 0;
}
