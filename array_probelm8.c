#include <stdio.h>

int main (){
    int n ,p=0,ne=0,z=0;
    scanf("%d",&n);

    int arr[n];
    for(int i =0 ;i<n ;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0 ;i<n ;i++){
        if(arr[i]>0){
            p++;
        }
        else if(arr[i]<0){
            ne++;
        }
        else{
            z++;
        }
    }
    printf("The total '+'-ve is %d.\nThe total '-'-ve is %d.\nThe total zero is %d.",p,ne,z);


    return 0;
}