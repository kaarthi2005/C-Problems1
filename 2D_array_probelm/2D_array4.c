#include <stdio.h>

int main (){

    int row , column;
    scanf("%d %d",&row,&column);

    int arr[row][column];

    for(int i =0; i<row ;i++){
        for(int j =0 ;j<column ;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    

    for(int i =0 ;i<row ;i++){
        int max = 0;
        for(int j =0 ;j<column ;j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
         printf("Ward %d Max = %d\n\n",i+1,max);
      
    }
   

    return 0;
}