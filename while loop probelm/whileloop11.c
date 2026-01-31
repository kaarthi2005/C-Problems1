#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;
    int sum = 0;
    while (n--)
    {
        int num;
        scanf("%d", &num);
        sum += num;
        
        if (num >2)
        {
            count++;
        }
    }
    printf("Total Delayed : %d\n", sum);
    printf("Delayed days : %d", count);

    return 0;
}