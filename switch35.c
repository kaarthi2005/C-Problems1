#include <stdio.h>

int main (){
    printf("       Fuel Cost Calculator     \n");
    printf("Type1 for Petrol or Type2 for Diesel or Type3 for CNG : ");
    int n;
    scanf("%d",&n);
    printf("Enter how many  Litre's you Want  :  ");
    int a;
    scanf("%d",&a);

    switch (n)
    {
    case 1:
        printf("%d",a*105);
        break;
     case 2:
        printf("%d",a*92);
        break;
     case 3:
        printf("%d",a*85);
        break;
    
    
    default:
        break;
    }
    return 0;
}

