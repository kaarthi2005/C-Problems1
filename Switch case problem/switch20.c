#include <stdio.h>

int main (){
    printf("If you are Admin Press 1\n");
    printf("If you are Employeer Press 2\n");
    int n ;
    scanf("%d",&n);

    printf("Enter time you are login: \n");
    int time ;
    scanf("%d",&time);

    switch (n)
    {
    case 1:
        printf("Full Time Access Anytime\n");
        break;
    case 2: 

        if(time >= 9 && time <=18){
            printf("Limited access.");
        }
        else{
            printf("Access Denied.");
        }
    
    default:
        break;
    }


    

    return 0;
}