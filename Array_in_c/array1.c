#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0 ;i<n ;i++){
        scanf("%d",&arr[i]);
    }
    int max =arr[0];
    int max2 =0;
    for(int i=0 ;i<n ;i++){
        if(max <= arr[i]){
            max=arr[i];
        }
    }
    for(int i=0 ;i<n;i++){
        if(max>arr[i] && max2 <arr[i]){
            max2=arr[i];
        }
    }
    printf("%d\n",max);
    printf("%d",max2);

    return 0;
}
