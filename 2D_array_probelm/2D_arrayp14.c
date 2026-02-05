#include <stdio.h>

int main (){

    int r,c;
    scanf("%d %d",&r,&c);

    int arr[r][c];

    for(int i =0 ;i<r ;i++){
        for(int j=0 ;j<c ;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int max = -100000000;
    int num = 0;
    int index = 0;
    for(int i =0 ;i<=r ;i++){
        for(int j=0 ;j<c/r ;j++){
            num = arr[j][i] + arr[j+1][i];
        }
        if(num > max){
            max = num;
            index = i;
        }
    }
    printf("%d",index);
   

    return 0;
}