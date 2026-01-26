#include <stdio.h>

int main (){
    int num1 , num2 , num3;
    printf("Enter a Three Number : ");
    scanf("%d  %d  %d",&num1,&num2,&num3);

    if(num1 >num2){
        if(num1>num3){
            printf("%d is Largest.",num1);
        }
    }
    else if(num2>num3){
        printf("%d is Largest.",num2);
    }
    else{
        printf("%d is Largest.",num3);
    }

    return 0;
}