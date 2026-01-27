#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 1;
    int space = 4;
    int star1 = 9;
    int space1 = 1;

    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;
        for (int k = 1; k <= star; k++)
        {
            printf("*");
        }
        star += 2;

        printf("\n");

       
    }
    for (int o = 1; o <= n/2; o++)
    {
        for (int l = 1; l <= star1; l++)
        {
            printf("*");
        }
        star1 -= 2;

        printf("\n");

        for (int m = 1; m <= space1; m++)
        {
            printf(" ");
        }
        space1++;
    }
    return 0;
}