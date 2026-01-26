#include <stdio.h>

int main (){
    int num ; 
    scanf("%d",&num);

    if(num>0){
        printf("%d is an Positive",num);
    }
    else if(num<0){
        printf("%d is an negative",num);
    }
    else{
        printf("%d is a Zero",num);
    }

    return 0;
}