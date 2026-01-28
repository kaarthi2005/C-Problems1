#include <stdio.h>

int main()
{
    printf("      Gym Membership Fee Calculation      \n");
    printf("Type1 for 1month or Type2 for 3month  or Type3 for 6month :  \n");

    int n;
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Membership Fee 1500");
        break;
    case 2:
        printf("Membership Fee 4000");
        break;
    case 3:
        printf("Membership Fee 7000");
        break;

    default:
        break;
    }

    return 0;
}