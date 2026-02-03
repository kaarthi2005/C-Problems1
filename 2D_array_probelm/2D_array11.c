#include <stdio.h>

int main (){
    int r , c;
    scanf("%d %d",&r,&c);

    int arr[r][c];

    for(int i =0 ;i<r ;i++){
        for(int j =0 ;j<c ;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max = -100000000;
    int min = 100000000;
    
    
    for(int i =0 ;i< r ;i++){
        int sum =0 ;
        for(int j =0 ;j< c ;j++){
            sum+=arr[i][j];
        }
        if(sum>max){
            max =sum;
        }
        if(sum<min){
            min = sum;
        }
    }
    printf("%d",max-min);



    return 0;
}