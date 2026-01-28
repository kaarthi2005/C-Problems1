#include <stdio.h>

int main()
{
    printf("        Train Ticket Upgrade Fee       \n");
    printf("Type1 for Sleeper or Type2 for 3AC or Type3 for 2AC :  \n");

    int n;
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Upgrade Fee 300 ");
        break;
    case 2:
        printf("Upgrade Fee 800");
        break;
    case 3:
        printf("Upgrade Fee 1500");
        break;

    default:
        break;
    }

    return 0;
}