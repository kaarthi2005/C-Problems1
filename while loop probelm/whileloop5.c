#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);

    int arr[n];
    
    int count =0;
    int count1 = 0;
   
    int i=0;
    while (i<n)
    {
        scanf("%d",&arr[i]);
       
        if(arr[i]!=1){
            count++;
        }
        else{
            count1++;
        }

        i++;
    }
    printf("Successful: %d",count1);
    printf("Cancelled: %d",count);
    
    if(count1<=count){
        printf("Risk");
    }
    else{
        printf("Safe");
    }
    return 0;
}