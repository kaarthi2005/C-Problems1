#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);
    
    int hour;
    printf("Enter a hour  : ");
    scanf("%d",&hour);

    int chargebike = 10;
    int chargecar = 20;

    switch (n)
    {
    case 1:
        printf("%d",chargebike*hour);
       
        break;
    
    case 2:
    
        printf("%d",chargecar*hour);
        break;
    
    default:
        printf("%d",chargecar*hour);
        break;
    }

    return 0;
}