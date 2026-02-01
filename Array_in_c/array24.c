#include <stdio.h>
#include <stdbool.h>

int main (){
    int n;
    scanf("%d",&n);

    int arr[n];
    
    for(int i =0 ;i<n ;i++){
        scanf("%d",&arr[i]);
    }
    bool s = false;
    for(int i =0 ;i<n ;i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i]==arr[j]){
                s = true;
                break;
            }
        }
        if(s){
            break;
        }
    }
    if(s){
        printf("No");
    }
    else{
        printf("Yes");
    }

    return 0;
}