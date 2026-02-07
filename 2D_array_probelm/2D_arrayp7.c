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
    int min ;
    int max ;
    int index = 0 ;
    int count = 0;
    for (int i = 0; i < r; i++)
    {
        min = 1000000000;
        max = -1000000000;

        for (int j = 0; j < r; j++)
        {
           
                if (arr[i][j] < min)
               {
                    min = arr[i][j];
                    index = j;

                }
        }
       

        
            for (int k = 0; k < r; k++) 
            {
                if(arr[k][index]> max){
                    max=arr[k][index];
                }
                
            }
        
            // printf("%d min  %d \n\n",min,index);
            // printf("%d max \n\n",max);
        

        if (max == min)
        {
            count++;
        }
    }
 

    printf("%d", count);
   
    return 0;
}