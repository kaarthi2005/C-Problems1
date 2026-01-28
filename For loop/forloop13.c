#include <stdio.h>

int main()
{
    int num1;
    scanf("%d", &num1);

    int num2;
    scanf("%d", &num2);

    int sum = 0;
    int muliple = 1;

    for (int i = 1; i <= num2; i++)
    {

        muliple = num1 * i;

        if (muliple <= num2)
        {
            sum += muliple;
        }
    }
    printf("%d", sum);

    return 0;
}