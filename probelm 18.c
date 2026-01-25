#include <stdio.h>

int main (){

    int num , num1 , num2;
    printf("Enter a number :");
    scanf("%d",&num);

    printf("Enter the Two Numbers for the divisible : ");
    scanf("%d  %d",&num1,&num2);

    if(num%num1==0  && num%num2==0){
        printf("Divisible by %d and %d.",num1,num2);
    }
    else{
        printf("Not Divisible by %d and %d.",num1,num2);
    }



    return 0;
}