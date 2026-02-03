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

    int count =0;

    for (int i = 0; i < R; i++)
    {
        int odd = 0,even = 0;
        for (int j = 0; j < C; j++)
        {
          if(arr[i][j]%2 ==0){
            even++;
          }
          else{
            odd++;
          }
            
        }
        if (odd==even){
           count++;
        }
        
    }
    printf("%d\n",count);
    return 0;
}