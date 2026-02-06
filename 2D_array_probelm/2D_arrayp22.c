#include <stdio.h>

int main (){
    int r,c;
    scanf("%d %d",&r,&c);

    int arr[r][c];
    for(int i =0 ;i<r ;i++){
        for(int j =0 ; j<c ;j++){
            scanf("%d",&arr[i][j]);
        }
    }
int count ,count1=0;
    for(int i =0 ;i<r ;i++){
        count = 0;
        for(int j =0 ; j< c-1 ;j++){
            if(j+1 != c){
            if(arr[i][j]<arr[i][j+1]){
                count ++;
            }
        }
        if(count == c-1){
            count1++;
        }
        }
    }
    printf("%d",count1);

    return 0;
}