#include<stdio.h>

int main(){
    int n, num = 0, count = 0;
    scanf("%d", &n);
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0) count++;
        if (count == n)
        {
            num = 2;
            break;
        }
    }
    printf("%d\n", num);
    return 0;
}
