#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);

    int star = 9;
    int space=1;

    for(int i =1 ;i<= n ;i++){
        
    
        for(int j =1 ;j<=star;j++){
            printf("*");
        }
        star-=2;
        printf("\n");
        for(int k=1 ;k<=space;k++){

            printf(" ");
        }
        space++;
        
    }
    return 0;
}