#include <stdio.h>

int main (){
    printf("Enter a room type : ");
    printf("1. for Standard \n ");
    printf("2. for Deluxe \n");

    int n;
    scanf("%d",&n);

    printf("Peak (A)-- ₹2500   Off(B) -- ₹2000\n");
    printf("Peak(C) -- ₹4000   Off(D)-- ₹3000\n");
    char ch ;
    scanf(" %c",&ch);

    switch (n)
    {
    case 1:
        if(ch=='A'){
            printf("2500");
        }
        else if(ch == 'B'){
            printf("2000");
        }
        break;
    case 2:
        if(ch=='C'){
            printf("4000");
        }
        else if(ch =='D'){
            printf("3000");
        }
        break;
    
    default:
        break;
    }

    return 0;
}