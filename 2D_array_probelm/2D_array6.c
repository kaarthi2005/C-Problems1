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
    int max = arr[0][0];
    int max2 = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if(max>arr[i][j] && arr[i][j]>max2){
                max2=arr[i][j];
            }
        }
    }
    printf("%d",max2);

    return 0;
}