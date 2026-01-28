#include <stdio.h>

int main()
{
    printf("      Traffic Fine Calculator      \n");
    printf("Type1 for No-Helmet or Type2 for Single-Jump  or Type3 for Over Speeding :  \n");

    int n;
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Fine 1000");
        break;
    case 2:
        printf("Fine 1500");
        break;
    case 3:
        printf("Fine  2000");
        break;

    default:
        break;
    }

    return 0;
}