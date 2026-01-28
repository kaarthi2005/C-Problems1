#include <stdio.h>

int main()
{
    int a, b, c = 0;
    scanf("%d %d", &a, &b);
    int temp = a;
    int gcd ;

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            if(a<b){
                gcd = a;
                gcd =i;
            }
            else{
                gcd = b;
                gcd=i;
            }
        }
    }
    printf("%d", gcd);

    return 0;
}