#include<stdio.h>

int main(){
    int n, sum = 0;
    scanf("%d", &n);
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + ((int)arr[i] - 48);
    }
    printf("%d\n", sum);
    return 0;
}
