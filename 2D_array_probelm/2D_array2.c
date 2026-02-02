#include <stdio.h>

int main (){
    int row;
    scanf("%d",&row);

    int column;
    scanf("%d",&column);
    int arr[row][column];

    for(int i =0 ;i<row;i++){
        for(int j=0 ;j<column ;j++){
            scanf("%d",&arr[i][j]);
        }
    }

   int maxsum =0;
   int count =0;

    for(int i = 0;i<row ;i++){
        int sum = 0;
        for(int j = 0 ;j<column ;j++){
           sum+=arr[i][j];
        }
        if(sum>maxsum){
            maxsum =sum;
            count++;
        }
    }
    printf("High sales in month %d",count);
   

    return 0;
}