#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int positive = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positive++;
        }
    }
    int min = arr[0];
    int min2 = 0;

    int max = arr[0];
    int max2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (positive > 2 || positive == 2)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        else
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (positive > 2 || positive == 2)
        {
            if (max > arr[i] && arr[i] > max2)
            {
                max2 = arr[i];
            }
        }
        else{
             if (min < arr[i] && arr[i] < min2)
            {
                min2 = arr[i];
            }
        }
    }

    int mul = 0;
    int mul2 = 0;


    if (positive >= 2)
    {
        mul = max * max2;
        printf("%d", mul);
    }
    else
    {
        mul2 = min * min2;
        printf("%d",mul2);
    }

    return 0;
}