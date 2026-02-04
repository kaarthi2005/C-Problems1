#include <stdio.h>

int main()
{

    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int min = arr[0][0];
    int max = 0;
    int index = 0;
    int index2 = 0;
    int count = 0;
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            min = arr[i][j];
            

                if (arr[i][j] < min)
               {
                    min = arr[i][j];
                    index = j;
                    index2 = i;
                }
        }
            for (int k = 0; k < r; k++)
            {
                max = min;
                if (arr[index2 + k][index] > max)
                {
                    max = arr[index2 + k][index];
                }
            }
        

        if (max == min)
        {
            count++;
        }
    }
 

    printf("%d", count);

    return 0;
}