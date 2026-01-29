#include <stdio.h>


int main (){
    int n ; 
    scanf("%d",&n);

    int bed ;
    scanf("%d",&bed);

    int arr[n];
    int hours=0;
    int sum =0 ;
    int sum1=0;
    int sum3=0;

    for(int i = 0 ; i<n ;i++){
        scanf("%d",&arr[i]);
    }
    int i =0 ;
    while (i<n)
    {
        if(arr[i]>0){
            sum+=arr[i];
        }
        else{
            sum1-=arr[i];
        }
        
        if(arr[i]>0 && arr[i+1]>0){
            hours++;
        }
    i++; 
    }
    int a=0;
    sum3 = sum-sum1;
     printf("%d\n",sum3);
    if(bed>sum3){
        printf("Critical Hours: %d",a);
    }
    else{
        printf("Critical Hours: %d",hours);
    }

    
   

    

    return 0;
}