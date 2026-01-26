#include <stdio.h>


int main (){
    int num;
    scanf("%d",&num);

    if(num % 5==0){
        printf("Number %d is divisible by 5 ",num);
    }
    else{
        printf("Number %d Not divisible by 5",num);
    }


    return 0;
}