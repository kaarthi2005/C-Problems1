#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int gcd;

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            if (a < b)
            {
                gcd = a;
                gcd = i;
            }
            else
            {
                gcd = b;
                gcd = i;
            }
        }
    }
    int c = (a * b) / gcd;
    printf("%d", c);

    return 0;
}