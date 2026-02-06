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

    int primecount = 0;
    for(int i =0 ;i<r ;i++){
        for(int j =0 ;j<c ;j++){
          if(arr[i][j]==2){
            primecount++;
          }
           if(arr[i][j] % 1==0 && arr[i][j]%arr[i][j] == 0){
             if(arr[i][j] % 2 !=0 && arr[i][j] != 1){
                primecount++;
             }
           }
        }
    }
    
    printf("%d",primecount);
}