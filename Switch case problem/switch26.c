#include <stdio.h>

int main (){
    printf("Enter the Electricity Bill Late Fine   \n");
    int n;
    scanf("%d",&n);


    int fine ;

    if(n<= 5){
        fine = 1;
    }
    else if(n<=10){
        fine = 2;
    }
    else{
        fine =3;
    }

    switch (fine)
    {
    case 1:
        printf("%d",n*50);
        break;
    case 2:
        printf("%d",n*100);
        break;
    case 3:
        printf("%d",n*300);
        break;
    default:
        break;
    }
    return 0;
}