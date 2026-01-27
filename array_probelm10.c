#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i =0 ; i<n ;i++){
        scanf("%d",&arr[i]);
    }
    printf("Search = ");
    int num ;
    scanf("%d",&num);
    int found = arr[0];

    for(int i = 0 ;i<n ;i++){

        if(num == arr[i]){
           found = arr[i] ;
        }

    }
    if(num == found ){
        printf("Found.");
    }
    else{
        printf("Not Found.");
    }

    return 0;
}
