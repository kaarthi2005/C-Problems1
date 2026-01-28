#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num;
    int sum=0;

    for(int i=1;i<=n;i++){
        num = i*i;
        sum += num;
    }
    
    printf("%d",sum);

    return 0;
}