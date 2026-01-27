#include <stdio.h>

int main (){
    int n;
    

    scanf("%d",&n);

    int arr[n];

    for (int i=0 ; i < n ;i++){
        scanf("%d",&arr[i]);
    }
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("%d",length);
    

    return 0;
}