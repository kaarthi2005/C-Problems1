#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    int arr[26];

    for (int j = 0; j < n; j++)
    {
        arr[str[j] - 'a']++;
    }
    for (int j = 0; j < n - 1; j++)
    {
        if (arr[str[j] - 'a'] == 1)
        {
            printf("%c", str[j]);
            return 0;
        }
    }

    printf("-1");

    return 0;
}