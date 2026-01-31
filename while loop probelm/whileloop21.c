#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0 ;i<n ;i++){
        scanf("%d",&arr[i]);
    }

    int count =0;
    int count1=0;
    int i=0;
    while (i<n)
    {
        if(arr[i]>20){
            count++;
        }
        if(arr[i]>20 && arr[i+1]>20){
            count1++;
        }
        i++;
    }
    printf("Congestion Minutes: %d\n",count);
    printf("Longest Congestion Streak :  %d",count1);
    


    return 0;
}