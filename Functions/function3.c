#include <stdio.h>
void odd(int num){
    if(num%2 == 0){
        printf("Even");
    }else{
        printf("Odd");
    }
}

int main (){
    int num;
    scanf("%d",&num);

    odd(num);

    return 0;
}