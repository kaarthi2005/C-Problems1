#include <stdio.h>

int main (){
    printf("      Water Bill Calculation      \n");
    printf("type1 for Domestic or type2 for Commercial : ");
    int n;
    scanf("%d",&n);

    printf("Enter the total usage of unit : ");
    int unit;
    scanf("%d",&unit);

    switch (n)
    {
    case 1:
        if(unit <= 30){
            printf("Bill %d",unit*5);
        }
        else if(unit >30 ){
            printf("Bill %d",unit*8);
        }
        break;
    case 2: 
        printf("Bill %d",unit*10);
        break;
    
    default:
        break;
    }


    return 0;
}