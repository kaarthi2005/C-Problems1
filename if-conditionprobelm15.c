#include <stdio.h>

int main (){
    int num1 , num2 ,num3 ;
    printf("Enter the three angles of triangle : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    int sum =  num1+num2+num3;

    if(num1 == num2 && num1== num3){
        if(sum==180){
              printf("Valid Triangle");
        }
        else{
        printf("Not a Valid Triangle");
    }
            
    }
    else{
        printf("Not a Valid Triangle");
    }


    return 0;
}