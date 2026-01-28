#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a;
    scanf("%d", &a);
    int d = 35000;
    int b = 50000;
    int year =5000;
    switch (n)
    {
    case 1:

        if (a >= 3)
        {
            printf("%d", b+(year*a));
        }
        else
        {
            printf("%d", b);
        }
        break;
    case 2:

        if (a >= 3)
        {
            printf("%d", d +(year*a));
        }
        else
        {
            printf("%d", b);
        }
        break;

    default:
        break;
    }

    return 0;
}