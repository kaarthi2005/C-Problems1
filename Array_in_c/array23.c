#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i =0 ;i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int min = 1;
    int min1 = arr[0];
    int count =0;
    for(int i =0 ;i<n ;i++){
        if(arr[i]>0){
            if(arr[i]<= min){
                min = arr[i];
                count = 1;
            }
        }
        if(arr[i]<0){
            if(arr[i]> min1){
                min1 = arr[i];
            }
        }
        
    }
    if(count){
    printf("%d",min);
    }
    else{
        printf("%d",min1);
    }

    return 0;
}