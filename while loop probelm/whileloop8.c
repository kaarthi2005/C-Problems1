#include <stdio.h>

int main (){

    int n;
    scanf("%d",&n);
    int arr[n];

    int i=0;

    while (i<n)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    
    int count =0;
    i=0;
    while (i<n)
    {
        if(arr[i]==0 && arr[i+1]==0){
            count++;
        }
        i++;
    }
    printf("Longest Default Streak: %d",count);


    return 0;
}

