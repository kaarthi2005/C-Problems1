#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a = 0;
    int count = 0;
    while (n--)
    {

        int num;
        scanf("%d", &num);

        int max = num;
        if (num > a)
        {
            a = max;
        }
        if (num > 5)
        {
            count++;
        }
    }

    printf("Max Usage : %d\n", a);
    printf("Surge Hours : %d", count);

    return 0;
}