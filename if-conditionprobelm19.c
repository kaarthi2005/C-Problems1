#include <stdio.h>

int main (){
    int num ;
    printf("Give a input : ");
    scanf("%d",&num);

    if(num >= 0 && num <= 9){
        printf("Digits");
    }
    else{
        printf("NOt a Digits");
    }


    return 0;
}