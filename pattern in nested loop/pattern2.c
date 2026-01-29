#include <stdio.h>

int main()
{
    int n = 4;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            printf(" ");
        }
        n--;
        for (int k = 1; k <= i; k++)
        {
            printf("%c", k + 64);
        }
        
        for (int l = i - 1; l > 0; l--)
        {
            printf("%c", l + 64);
        }
        printf("\n");
    }

    return 0;
}