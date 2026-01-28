#include <stdio.h>

int main()
{
    printf("    Power Cut Alert System    \n");

    printf("Enter the Power cut alert time : ");
    int n;
    scanf("%d", &n);

    int fine;

    if (n <= 1)
    {
        fine = 1;
    }
    else if (n <= 4)
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
        printf("Short Interruption");
        break;
    case 2:
        printf("Medium interruption");
        break;
    case 3:
        printf("Long Interruption");
        break;
    default:
        break;
    }
    return 0;
}