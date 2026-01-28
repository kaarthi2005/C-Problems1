#include <stdio.h>

int main()
{
    printf("      Restaurant Discount System      \n");
    printf("type1 for Regular  or type2 for Premium ( : ");
    int n;
    scanf("%d", &n);

    printf("Enter the total Bill Amount : ");
    int Amount;
    scanf("%d", &Amount);

    float b = (Amount / 100);
    int a = b * 5;

    float c = Amount / 100;
    int d = c * 15;

    switch (n)
    {
    case 1:

        printf("%d", Amount - a);
        break;
    case 2:

        printf("%d", Amount - d);
        break;

    default:
        break;
    }

    return 0;
}