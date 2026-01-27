#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    int a =n/2;
    int b =n-a;
    int star = 1 ;
    for(int i=1 ;i<=b ;i++){
        for(int j=1 ;j<= star;j++){
            printf("*");
        }
        star++;
        printf("\n");
    }
    int star1=a;
    for(int k=1 ;k<=a ;k++){
        for(int l=1 ;l<= star1;l++){
            printf("*");
        }
        star1--;
        printf("\n");
    }
    

    return 0;
}