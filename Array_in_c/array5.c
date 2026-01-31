#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);


    int arr[n-1];
    for(int i=0 ;i<n-1;i++){
        scanf("%d",&arr[i]);
    }  
    int sum =0;
    
    for(int i =n;i>=1 ;i--){
       sum += i;
    }
    int sum1 =0;
    for(int i =0;i<n-1;i++){
        sum1+=arr[i];
    }
    printf("%d",sum-sum1);

    return 0;
}