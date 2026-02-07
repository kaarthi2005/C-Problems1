#include <stdio.h>

int main(){
    int r,c;
    scanf("%d %d",&r,&c);

    int arr[r][c];

    for(int i=0 ;i<r ;i++){
        for(int j=0 ;j<c ;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int total = 0;
    int min = 100000000;
    for(int i=0 ;i<r ;i++){
        for(int j=0 ;j<c ;j++){
            total += arr[i][j];
        }
        if(total<min){
            min = total;
        }
    }

    
    int sum = 0;
    int sum2 = 0;
    int index = 0;
    for(int i=0; i<r/2 ;i++){
        
        for(int j=0 ;j<c ;j++){
          sum =  arr[i][j] + arr[i+1][j+1];
          
          
        index = j+1;
        if(sum == min ){
            printf("%d",index);
            return 0;
        }
        for(int k = 0 ;k<c ;k++){
            
            sum2 = arr[i+1][k] + arr[i][k+1];
            index = k+1;
            if(sum2 == min){
                printf("%d",index);
                return 0;
            }
        }
        }
    }


    return 0;
}