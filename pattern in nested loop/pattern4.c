#include <stdio.h>

int main()
{
    int n = 5;

    int space = 0;
    int space1 = 8;

    for (int a = 1; a <= 5; a++)
    {
        for (int b = 5; b >= a; b--)
        {
            printf("*");
        }
        for (int i = 1; i <= space; i++)
        {
            printf(" ");
        }
        space += 2;
        for (int c = 5; c >= a; c--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int a = 1; a <= 5; a++)
    {
        for (int b = 1; b <= a; b++)
        {
            printf("*");
        }
        for (int i = 1; i <= space1; i++)
        {
            printf(" ");
        }
      
            space1 -= 2;
        
        for (int c = 1; c <= a; c++)
        {
            printf("*");
        }
        printf("\n");
    }
}