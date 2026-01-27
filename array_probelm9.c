#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr1[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int length = sizeof(arr1) / sizeof(arr1[0]);

    for (int i = length - 1; i >= 0; --i)
    {
        printf("%d ", arr1[i]);
    }

    return 0;
}
