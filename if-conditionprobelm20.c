#include <stdio.h>

int main (){

    int num1 , num2;
    printf("Enter a two numbers : ");
    scanf("%d %d",&num1,&num2);

    int a = (num1 < num2 )? num1 : num2 ;
    printf("%d is Smallest",a);


    return 0 ;
}