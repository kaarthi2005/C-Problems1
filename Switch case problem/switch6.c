#include <stdio.h>

int main (){
    printf("Normal press1 or Express press2");
    int n;
    scanf("%d\n",&n);
    int h;
    scanf("%d",&h);

    switch (n)
    {
    case 1:
        printf("Delivery 50");
        break;

    case 2: 
        if(h>=1000){
            printf("Delivery Free");
        }
        else{
            printf("Delivery 100");
        }
        break;
    default:
        break;
    }


    return 0 ;
}