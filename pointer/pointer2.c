#include <stdio.h>
int maximun(int arr[],int size){
    int *p = arr;
    int max =0;
    for(int i =0 ;i<size;i++){
        if(*(p+i) >max){
            max = *(p+i);
        }
    }
    return max;
}

int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for(int i=0 ;i<size ;i++){
        scanf("%d",&arr[i]);
    }

    int total = maximun(arr,size);
    printf("%d",total);

    return 0;
}