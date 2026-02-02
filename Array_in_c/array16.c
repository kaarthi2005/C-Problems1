#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0 ;i<n ;i++){
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    int count = -1;
    for(int i =0 ;i<n ;i++){
        if(arr[i]<min){
            min =arr[i];
            count ++;
        }
    }

   
    int count2 = count;
    
    for(int i =count ; i<n ;i++){
        if(arr[i]>min){
           
            count2++;
        }
    }
    if(count2 != count+1){
        printf("%d",count2);
    }
    else{
        printf("-1");
    }
    return 0;
}