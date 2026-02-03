#include <stdio.h>

int main()
{
    int row;
    scanf("%d", &row);

    int column;
    scanf("%d", &column);

    int arr[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

  
    int max1 = 1000000;

    int a = 0;

    for (int i = 0; i < row; i++)
    {
        int max = 0;
        for (int j = 0; j < column; j++)
        {

            max += arr[i][j];
        }
           
            if (max < max1)
            {
                max1 = max;
                a = i;
            }
        
    }
    printf("%d", a);

    return 0;
}