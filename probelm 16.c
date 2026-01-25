#include <stdio.h>

int main(){
    int num ;
    scanf("%d",&num);

    if(num>0){
        printf("%d is an Positive Number",num);
    }
    else if(num<0){
        printf("%d is an Negative Number",num);
    }
    else{
        printf("%d is Zero",num);
    }

    return 0;
}