#include <stdio.h>

int main(){
    int num1 , num2;
    printf("Enter the numbers : ");
    scanf("%d %d",&num1,&num2);


    printf("Press 1 to + .\n");
    printf("Press 2 to - . \n");
    printf("Press 3 to * .\n");
    printf("Press 4 to / .\n");
    printf("Press 5 to reminder .\n");

    int number ;
    scanf("%d",&number);



    switch (number)
    {
    case 1:
        printf("Result = %d",num1+num2);
        break;
    case 2:
         printf("Result = %d",num1-num2);
        break;
    case 3:
        printf("Result = %d",num1*num2);
        break;
    case 4:
         printf("Result = %d",num1/num2);
        break;
    case 5:
         printf("Result = %d",num1%num2);
        break;
    
    default:
        printf("Give an valid number");
        break;
    }



    return 0;
}