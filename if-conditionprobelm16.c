#include <stdio.h>

int main (){
    int num1 , num2 ,num3 ;
    printf("Enter the three angles of triangle : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    

    if(num1 == num2 && num1== num3){
        printf("Equilateral Triangle");
    }
    else{
        printf("Not a Equilateral Triangle");
    }
    return 0;
}