#include <stdio.h>

void partial(int *p , int *size){

    for(int i=0 ;i<*size ;i++){
        if(*(p+i)%2==0){
            printf("%d ",*(p+i));
        }
        else{
            printf("%d ",*(p+i)*2);
        }
    }
}

int main ()
{
    int size;
    scanf("%d",&size);

    int arr[size];
    for(int i=0 ;i<size ;i++){
        scanf("%d",&arr[i]);
    }

    int *p = arr;

    partial(p,&size);
    return 0;
}