#include <stdio.h>

int main (){
    int r,c;
    scanf("%d %d",&r,&c);

    int arr[r][c];

    for(int i =0 ;i<r ;i++){
        for(int j =0 ;j<c ;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int mul;
    int high = -100000000;

    int row = -1;
    for(int i =0 ;i<r ;i++){
        mul = 0;
        for(int j =0 ;j<c ;j++){
            if(j+1 != c){
            mul = arr[i][j]*arr[i][j+1];
            }
        }
        if(mul>high){
            high = mul;
             row = i;
        }
        
    }
    printf("%d",row);

    return 0;
}