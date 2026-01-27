#include <stdio.h>

int main(){
    int n,sum=0;
    scanf("%d",&n);

    int arr[n];
    for(int i =0 ;i<n ;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0 ;i<n ;i++){
        sum+=arr[i];
    }
    int length = sizeof(arr)/sizeof(arr[0]);

    printf("%d",sum/length);


    return 0;
}