#include <stdio.h>

int main()
{
    printf("     Online Shopping Delivery Mode     \n");
    printf("Type1 for Standard or Type2 for SameDAy or Type3 for Pickup :  \n");

    int n;
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Delivery Charge = 40");
        break;
    case 2:
        printf("Delivery Charge = 120");
        break;
    case 3:
        printf("Delivery Charge Free");
        break;

    default:
        break;
    }

    return 0;
}