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
    int reapt = 0;
    
    for(int i=0;i<row;i++){
        for(int j=0;j<column-1;j++){
            int val=arr[i][j];
            for(int k=i;k<column;k++){
                if(val==arr[k][j]){
                    printf("%d",arr[k][j]);
                    return 0;
                }
            }
        }
    }

    return 0;
}