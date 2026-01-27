#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);
    int space =6;
    
    for(int i=1 ; i<= n ;i++){
        for(int j=1 ; j<=i ;j++){
           printf("%d",j);
        }
        for(int l=1 ; l<=space ;l++){
           printf(" ");
        }
        space=space-2;
        int a = i;
        for(int m =1 ;m<=i ;m++){
            printf("%d",a);
            a--;
        }
         printf("\n");
        
    }
    

    return 0;
}