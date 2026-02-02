#include <stdio.h>

int main  (){
    int row;
    scanf("%d",&row);

    int column;
    scanf("%d",&column);

    int arr[row][column];

    for(int i =0 ;i<row ;i++){
        for(int j = 0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum = 0;
    int count =0;
    for(int i =0 ;i<row ;i++){
        count++;
        for(int j = 0;j<column;j++){
           sum += arr[i][j];
        }
        
        printf("Student %d Total = %d",count,sum);
        printf("\n");
        sum =0;
    }
    
  

    return 0;
}
