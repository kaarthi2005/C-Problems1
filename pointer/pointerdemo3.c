#include <stdio.h>
int traversal(int arr[],int size){
    int *p = arr;
    int sum = 0;
    for(int i=0 ;i<size ;i++){
        if(*(p+i) >=50){
            break;
        }
        sum+=*(p+i);
    }

    printf("output is : ");
    return sum;
}


int main (){

    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i=0 ;i<size ;i++){
        scanf("%d",&arr[i]);
    }

    int total = traversal(arr,size);
    printf("%d",total);

    return 0;
}