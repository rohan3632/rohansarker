#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int a, b, check = 0;
    scanf("%d %d", &a, &b);
    char arr[100];
    scanf("%s", &arr);
    int n = a + b + 1;
    if (arr[a] == '-')
    {
        if (strlen(arr) == n)
        {
            for (int i = 0; i < n; i++)
            {
                if (i == a)
                    continue;
                if (isdigit(arr[i]))
                {
                    check = 1;
                } else
                {
                    check = 0;
                    break;
                }
            }
        }
    }
    printf("%s\n", (check) ? "Yes" : "No");
    return 0;
}
