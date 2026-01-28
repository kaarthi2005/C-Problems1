#include <stdio.h>

int main(){
    printf("\n");
    printf("      Welcome Railway ticket Booking ! \n\n   Select Class : \n press 1. sleeper / press 2. Ac :  \n");

    int n,age;
    scanf("%d",&n);

    printf("Enter Your Age : ");
    scanf("%d",&age);

    


    

    switch (n)
    {
    case 1:
        if(age<=12){
            
            float b = (300/50.0)*10;
            int a = b;
            printf("Fare %d",300-a);
        }
        else if(age >=60){
        
             float b = (300/33.0)*10;
             int a = b;
            
            
            printf("Fare %d",300-a);
        }
        else{
            printf("Fare 300");
        }
        break;
    case 2:
        if(age<=12){
            
             float b = (300/50.0)*10;
             int a = b;
            printf("Fare %d",1000-a);
        }
        else {
            
            printf("Fare 1000");

        }
        break;
    
    default:
        break;
    }




    return 0;
}