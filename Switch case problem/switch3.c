#include <stdio.h>

int main(){
    
    printf("Enter a Account type: \n Type1 savings account / Type2 Current Account  :  ");
    
    int n,balance,withdraw;
    scanf("%d",&n);

    printf("Enter a Balance Amount : \n");
    scanf("%d",&balance);

    printf("Enter a WithdrawAmount : \n");
    scanf("%d",&withdraw);

    switch (n)
    {
    case 1:
        if(balance >= withdraw){
            printf("Transaction Successfull.");
        }
        else{
            printf("Invalild Balance.");
        }
        break;
    case 2:
        if(withdraw <= 5000 ){
            printf("Transaction Successfull.");
        }
        else{
             printf("Limit Exceeded.");
        }
        break;
    
    default:
     printf("Enter a correct account type !!!.");
        break;
    }

    return 0;
}