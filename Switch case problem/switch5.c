#include <stdio.h>

int main (){

    printf("     Moblie Recharge Cashback    \n");
    printf("Plan1 199 press 1\n");
    printf("Plan2 399 press 2\n");
     int n;
    scanf("%d",&n);

    

    int a = 199;
    int b =399;
    switch (n)
    {
    case 1 :
        printf("Card --> 12 or UPI --> 11");
        int c;
        scanf("%d",&c);
        if(c==12 || c==11)
             printf("Pay %d",a-20);
        else
            printf("Pay %d",a);
        break;
    case 2 :
        printf("Card --> 12 or UPI --> 11");
        int d;
        scanf("%d",&d);
        if(d==12 || d==11)
            printf("Pay %d",b-20);
        else
            printf("Pay %d",b);
        break;
    
    default:
        break;
    }

    

    return 0;
}