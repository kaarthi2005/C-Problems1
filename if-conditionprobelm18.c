#include <stdio.h>

int main (){
    int unit;
    printf("Enter a Electricity bill Units : ");
    scanf("%d",&unit);

    if(unit > 100){
        int cost = 5;
        int total = unit *cost;

        printf("Bill amount = Rs. %d",total);
    }
    else{
        int cost = 4;
        int total = unit *cost;

    printf("Bill amount = Rs. %d",total);
    }



    return 0;
}