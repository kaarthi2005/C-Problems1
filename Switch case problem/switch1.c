#include <stdio.h>

int main (){
    printf("Domestic Electicity press 1.\n");
    printf("Commercial Electicity press 2.\n");
    int n;
    scanf("%d",&n);

    printf("Enter a how many used Units : ");
    int unit;
    scanf("%d",&unit);

    switch (n)
    {
    case 1:
        if(unit<=100){
            int a = unit*3;
            printf("Bill  ₹%d",a);
        }
        else if(unit>100 && unit<=200){
             int a = unit*5;
            printf("Bill  ₹%d",a-80);
        }
        else {
            int a = unit*7;
            printf("Bill  ₹%d",a-80);
        }
        break;
    
    case 2:
        if(unit<=100){
            int a = unit*7;
            printf("Bill  ₹%d",a);
        }
        else if(unit>100){
             int a = unit*10;
            printf("Bill  ₹%d",a);
        }
        
        break;
    
    default:
        break;
    }


    return 0;
}