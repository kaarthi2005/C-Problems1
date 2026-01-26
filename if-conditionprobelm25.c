#include <stdio.h>

int main(){
    printf("Press 1 to + .\n");
    printf("Press 2 to - .\n");
    printf("Press 3 to * .\n");

    int choice ;
    scanf("%d",&choice);

    printf("\n");

    int num1,num2;
    printf("Enter a two number : ");
    scanf("%d  %d",&num1,&num2);

    switch (choice)
    {
    case 1:
        printf("Sum = %d",num1+num2);
        break;
    case 2:
        printf("Differance = %d",num1-num2);
        break;
    case 3:
        printf("Product = %d",num1*num2);
        break;
    
    default:
        printf("Enter only 1 - 3 in range.");
        break;
    }


    return 0;
}