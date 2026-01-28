#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count ;
    int primecount = 0;

    for(int i=2;i<=n;i++){//3
        count =0;
        for(int j=1;j<=i;j++){// 1  2 3 4
            if(i%j==0){// 3/3 ==0
                count++; //2
            }
        }
        if(count==2){
            primecount++;
        }
    }

    printf("%d", primecount);

    return 0;
}