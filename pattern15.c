#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);
    

    for(int i=65 ;i<=n+65;i++){
        int a =65;
        
        for(int j=65+n ;j>=i ;--j){
            
            printf("%c",a);
            a++;

        }
        printf("\n");
    }

    return 0;
}