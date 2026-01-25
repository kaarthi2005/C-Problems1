#include <stdio.h>

int main (){
    int num , num2;
    scanf("%d %d",&num,&num2);

    if(num%num2==0){
        printf("%d is divisible by %d.",num,num2);
    }
    else {
        printf("%d is not divisible by %d",num,num2);
    }


    return 0;
}