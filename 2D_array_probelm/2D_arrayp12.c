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

    int repeat =0 ;
 
    int count =-1;
   int temp =0;
  
    for(int i =0 ;i<r/2 ;i++){
        
        for(int j =0 ;j<c ;j++){
            for(int k =0 ;k<r ;k++){
                for(int l = (k == i ? j+1 :0) ;l<c ;l++){
                    if(arr[i][j] == arr[k][l]){
                        repeat = arr[i][j]; 
                        count++;
                    }
                }
                if(count > temp){
                   temp = repeat;
                }

            }
        }
    }
    printf("%d",temp);



    return 0;
}