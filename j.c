#include<stdio.h>

int main(){
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        min =  (min > arr[i]) ? arr[i] : min;
    }
    for (int i = 0; i < n; i++)
    {
        if (min == arr[i])
        {
            count++;
        }
    }
    printf("%s\n", (count % 2 == 0) ? "Unlucky" : "Lucky");
    return 0;
}
