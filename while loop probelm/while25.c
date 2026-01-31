#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;
    int count1 = 0;
    int day = 0;
    int i = 0;
    int totalday = 0;
    int arr[n];
    while (i < n)
    {
        scanf("%d", &arr[i]);
        day++;
        if (arr[i] >= 50000)
        {
            count1++;
        }
        if (arr[i] >= 50000 && arr[i + 1] >= 50000)
        {
            if (count1 == 2 || count1 == 1)
            {
                count++;
                totalday = day;
            }
        }

        i++;
    }

    if (count == 2)
    {

        printf("Fraud Triggerd at Attempt: %d\n", totalday);
    }
    else
    {
        printf("Fraud Triggered At Attempt: Not Triggered\n");
    }

    printf("High-Value Transaction: %d", count1);

    return 0;
}