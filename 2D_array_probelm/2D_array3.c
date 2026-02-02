#include <stdio.h>

int main (){
    int row ;
    scanf("%d",&row);

    int column;
    scanf("%d",&column);

    int arr[row][column];
    for(int i=0 ;i<row ;i++){
        for(int j =0 ;j<column ;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int count =0 ;
    for(int i=0 ;i<row ;i++){
        for(int j =0; j<column ;j++){
            if(arr[i][j]==0){
                count++;
            }
        }
    }

    printf("Empty Seats = %d",count);


    return 0;
}