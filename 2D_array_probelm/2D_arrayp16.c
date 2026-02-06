#include <stdio.h>

int main(){

    int r , c;
    scanf("%d %d",&r,&c);

    int arr[r][c];

    for(int i =0;i<r;i++){
        for(int j=0 ;j<c ;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int sum =0;
    
    int min = 10000000;
    int index = 0;
    for(int i =0 ;i<r ;i++){
        for (int j =0 ;j<c ;j++){
             sum += arr[i][j];
            }

            if(sum>0){
                if(min>sum){
                    min = sum;
                    index = i;
                }
            }
        }
    printf("%d",index);
    return 0;
}