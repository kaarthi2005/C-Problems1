#include <stdio.h>

int main()
{
    printf("     School Transport Fee     \n");

    printf("Enter the distance from school : ");
    int n;
    scanf("%d", &n);

    int fine;

    if (n <= 5)
    {
        fine = 1;
    }
    else if (n>=6 && n<=10)
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
        printf(" Transport Fee 800 ");
        break;
    case 2:
        printf(" Transport Fee 1200");
        break;
    case 3:
        printf(" Transport Fee 1800");
        break;
    default:
        break;
    }
    return 0;
}