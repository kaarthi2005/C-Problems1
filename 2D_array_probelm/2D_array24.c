#include <stdio.h>

int main (){
    int row;
    scanf("%d",&row);

    int column;
    scanf("%d",&column);

    int arr[row][column];

    for(int i =0 ;i<row ;i++){
        for(int j =0 ;j<column;j++){
            scanf("%d",&arr[row][column]);
        }
    }

    int count =0;
    int a =0;
    int b =0;
    int c =0;
    for(int i =0 ;i<row ;i++){
        
        for(int j =0 ;j< column ;j++){
            
            if(arr[i][j]/arr[i][j]==0 && arr[i][j]/1==0){
                if(i==count){
                    a = 1;
                }
                else if(i==count){
                    b =1;
                }
                else if(i==count){
                    c =1;
                }
            }
            
        }
        count++;
    }
    printf("%d",a+b+c);
}