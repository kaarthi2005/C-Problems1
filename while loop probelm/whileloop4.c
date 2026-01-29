#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);

    int arr[n];
    
    int count =0;
    for(int i = 0;i<n;i++){
         scanf("%d",&arr[i]);
    }
    int i=0;
    while (i<n)
    {
       
        if(arr[i]<1 && arr[i+1]<1){
            count++;
        }

        i++;
    }
    printf("Longest Failure Streak: %d",count);
    

    return 0;
}