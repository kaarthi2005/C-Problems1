#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i =0 ;i<n ;i++){
        scanf("%d",&arr[i]);
    }

    int count = 0;
    
    for(int i = 0 ; i<n ;i++){
        int dupilcate = 0;
         for(int j = i+1; j<n ;j++){
            if(arr[i] ==  arr[j]){
               dupilcate = 1;
            }
         }
         if(!dupilcate){
            count++;
         }
    }
    printf("%d",count);
    return 0;
}