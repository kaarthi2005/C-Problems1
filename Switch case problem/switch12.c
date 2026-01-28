#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    printf("ENter a trip : ") ;
    int trip;
    scanf("%d", &trip);

    switch (n)
    {
    case 1:
        if (trip == 1)
        {
            printf("100");
        }
        else if (trip >= 2)
        {
            printf("%d",trip*800);
        }
        break;

    case 2:
        
            printf("%d",trip*240);
        
        break;

    default:
        break;
    }

    return 0;
}