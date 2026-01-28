#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    for (int i = 0; i < n; i++)
    {

        printf("%d ", a);
        int sum = a + b;
        a = b;
        b = sum;
    }

    return 0;
}