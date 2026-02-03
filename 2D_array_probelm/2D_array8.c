#include <stdio.h>
int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    int arr[R][C];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int unique = 0;
    
    for (int i = 0; i < R; i++)
    {
        int count =0;
        for (int j = 0; j < C; j++)
        {
            if(arr[i][j]==arr[i][j+1]){
                count = 1;
            }
        }
        if(count == 0){
            unique++;
        }

    }
    printf("%d\n",unique);
    return 0;
}
