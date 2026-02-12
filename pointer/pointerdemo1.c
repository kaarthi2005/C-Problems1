#include <stdio.h>

void start(int *p,int *n,int *size){
    for(int i=*n;i<*size ;i++){
        printf("%d ",*(p+i));
    }

}

int main (){

    int size;
    scanf("%d",&size);

    int arr[size];
    for(int i=0 ;i<size ;i++){

        scanf("%d",&arr[i]);
    }

    printf("Enter the starting index: \n");
    int n;
    scanf("%d",&n);

    int *p = arr;

    start(p,&n,&size);


     return 0;

}