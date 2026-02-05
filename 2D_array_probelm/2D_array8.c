#include <stdio.h>

int main()
{

    int r, c;
    scanf("%d  %d", &r, &c);

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int max = 0;
    int sum = 0, sum1 = 0, sum2 = 0, sum3 = 0;
    for (int i = 0; i < r - 1; i++)
    {
        for (int j = 0; j < c - 1; j++)
        {
            sum += arr[i][j];
        }
    }
    if (sum > max)
    {
        max = sum;
    }

    for (int i = 0; i < r - 1; i++)
    {
        for (int j = 1; j < c; j++)
        {
            sum1 += arr[i][j];
        }
    }
    if (sum1 > max)
    {
        max = sum1;
    }

    for (int i = 1; i < r; i++)
    {
        for (int j = 0; j < c - 1; j++)
        {
            sum2 += arr[i][j];
        }
    }
    if (sum2 > max)
    {
        max = sum2;
    }

    for (int i = 1; i < r; i++)
    {
        for (int j = 1; j < c; j++)
        {
            sum3 += arr[i][j];
        }
    }

    if (sum3 > max)
    {
        max = sum3;
    }

    printf(" max : %d \n", max);

    return 0;
}