#include <stdio.h>

int main()
{
    printf("      Mobile Warranty Status Check      \n");

    printf(" Enter the number of years since purchase : ");
    int n;
    scanf("%d", &n);

    int fine;

    if (n == 0 || n == 1)
    {
        fine = 1;
    }
    else if (n >= 2)
    {
        fine = 2;
    }
    else
    {
        fine = 3;
    }

    switch (fine)
    {
    case 1:
        printf("  Under Warranty ");
        break;
    case 2:
        printf(" Limited Warranty");
        break;
    case 3:
        printf("  Out of Warranty");
        break;
    default:
        break;
    }
    return 0;
}