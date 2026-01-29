#include <stdio.h>

int main (){
    int n = 5;
    int space = 8;
    int space1 = 2;

    for(int i = 1 ;i<=5;i++){
        for(int j=1 ;j<=i ;j++){
            printf("*");
        }
        for(int l=1;l <= space ;l++ ){
            printf(" ");
        }
        space-=2;

        for(int k=1 ;k<=i ;k++){
            printf("*");
        }
        printf("\n");
    }
     for(int i = 1 ;i<=4;i++){
        for(int j=4 ;j>=i ;j--){
            printf("*");
        }
        for(int l=1;l <= space1 ;l++ ){
            printf(" ");
        }
        space1+=2;

        for(int k=4 ;k>=i ;k--){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}