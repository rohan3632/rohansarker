#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, s, sum;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        s = arr[0] + arr[1] + 2 - 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                sum = arr[i] + arr[j] + (j + 1) - (i + 1);
                s = (sum < s) ? sum : s;
            }
            
        }
        printf("%d\n", s);
    }
    return 0;
}
