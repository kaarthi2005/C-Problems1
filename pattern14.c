#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);

    for(int i=65 ;i<=n+65;i++){
        for(int j=65 ;j<=i ;j++){
            printf("%c",j);

        }
        printf("\n");
    }

    return 0;
}