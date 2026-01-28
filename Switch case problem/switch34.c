#include <stdio.h>

int main()
{
    printf("       Internet Speed Plan Selection       \n");
    printf("Type1 for Basic or Type2 for Standard  or Type3 for Premium :  \n");

    int n;
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("40 Mbps");
        break;
    case 2:
        printf("100 Mbps");
        break;
    case 3:
        printf("300 Mbps");
        break;

    default:
        break;
    }

    return 0;
}